# analog function and filter
 Implemetation of a linear differential equation and filters and various equations in Pspice Orcad

# TASK 1

Linear Differential Equation

![image](https://user-images.githubusercontent.com/56964828/126877661-29f5b16e-612f-4745-8927-e2b805654b95.png)

# BACTERIA GROWTH CALCULATOR :

Given that on day 1 there was only one bacterium in the jar. The bacteria multiply by binary fission (one bacteria splits into 2 per second) .

Find the plot of bacteria population vs time using analog circuits .

![image](https://user-images.githubusercontent.com/56964828/126877670-55e0362a-1c30-4d06-8797-aea9969772b3.png)

In the above differential equation k=ln(2).

Simulation results on transient analysis :

![image](https://user-images.githubusercontent.com/56964828/126877722-c70db4e0-39f2-4598-ae47-d3a59177c7e2.png)

# TASK 2

Design a frequency-dependent analog system that squares, integrates, and differentiates signals at different frequencies that lie max 5 Hz apart.

- Say your system produces a squared output of the input voltage when the input ac source frequency is “x Hz”. Similarly, when the input frequency is “y Hz” then, say, it produces the differentiation of the input voltage, and say at “z Hz” it integrates the input signal to produce the output.
  And say x < y < z; then |x-y| <=5 Hz and |y-z| <=5 Hz and |x-z|<=10 Hz, and x ≠ y ≠ z
- You can choose any 3 frequencies such that they lie in a range of 10 Hz, say for example (50,55,60) or (120,124,128) or (900,903,908),....... and so on.
-  Also, you can produce the outputs in any order, i.e., say the frequencies are x,y,z Hz then any of the three frequencies could be allotted to any of the three operations, but it should follow the constraint x ≠ y ≠ z.
- Design should have only one input terminal and one output terminal.

#### NBPF (Narrow Band Pass Filter)

```c++
#include<iostream>
using namespace std;
int main(){
    float q=50;
    float fc=110;
    float af=10;
    float c=1e-6;
    float r1=(q)/(2*3.141*fc*c*af);
    float r3=(q)/(3.141*fc*c);
    float r2=(q)/(2*3.141*fc*c*(2*q*q-af));
    cout<<"r1="<<r1<<" r2="<<r2<<" r3="<<r3;
}
```

![image](https://user-images.githubusercontent.com/56964828/126877900-eafad5af-2c28-4c06-af21-0cb411d6ddd5.png)
![image](https://user-images.githubusercontent.com/56964828/126877915-6487f758-9e46-40af-8406-35bc8950c654.png)

Simulation results on AC sweep :

![image](https://user-images.githubusercontent.com/56964828/126877957-262ea53f-50aa-45c6-b7da-df44484a3df8.png)

#### Square Wave Generation :

Procedure : Double rectifier + log + (antilog and adder )

![image](https://user-images.githubusercontent.com/56964828/126878045-c3a9caed-6434-4ebf-a914-652fca81e457.png)

#### Differentiator and Integrator

![image](https://user-images.githubusercontent.com/56964828/126878124-99d4e911-5b4b-4d40-86c1-6dd368ab78bd.png)

Simulation results on transient analysis :

![image](https://user-images.githubusercontent.com/56964828/126878269-5ac80774-c8d7-4c98-8780-deeb3961f48e.png)

Actual Waveform : blue

Square wave : red

differentiated wave(-ve) : pink

integrated waveform(-ve) : yellow

Final output : green





Software Used : Orcad

