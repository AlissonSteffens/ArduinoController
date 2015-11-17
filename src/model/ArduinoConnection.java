/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import jssc.SerialPort;
import jssc.SerialPortException;

/**
 *
 * @author Alisson
 */
public class ArduinoConnection {
    
    SerialPort serialPort;

    public ArduinoConnection(SerialPort serialPort) {
        this.serialPort = serialPort;
    }
    
    public void digitalWrite(byte b) throws SerialPortException{
        serialPort.writeByte(b);
    }
    
    public void disconnectArduino() throws SerialPortException{
        
        if(serialPort != null){
            serialPort.removeEventListener();

            if(serialPort.isOpened()){
                serialPort.closePort();
            }
            serialPort = null;
        }
    }
    
}
