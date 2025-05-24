# ECG Signal Processing and Arrhythmia Detection Circuit

## Overview

This project details the design, simulation, and construction of an analog Electronic Cardiogram (ECG) signal processing circuit. The system is designed to acquire and filter ECG signals, and subsequently detect common arrhythmias such as bradycardia and tachycardia, indicating the heart's rhythm status via LEDs. The circuit includes stages for differential amplification, high-pass filtering, low-pass filtering, and arrhythmia detection logic. 

## Features

* ECG signal amplification.
* Baseline wander removal using a second-order high-pass filter (Fc = 0.15 Hz). 
* High-frequency noise attenuation using a second-order low-pass filter (Fc = 40 Hz). 
* Detection of:
    * Normal Sinus Rhythm (Sano) 
    * Bradycardia 
    * Tachycardia 
* LED indicators for visually representing the detected heart rhythm. 
* Selectable arrhythmia input for testing/simulation. 
## Repository Structure
