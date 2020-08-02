# ImageAlgorithmAccelerationByHLS

## Introduction

#### Image enhancement-gamma transformation

Designed by woodfan

Origin Picture:

![](https://github.com/maxs-well/ImageAlgorithmAccelerationByHLS/blob/master/image/1.png)

Processed picture:

![](https://github.com/maxs-well/ImageAlgorithmAccelerationByHLS/blob/master/image/2.png)

![](https://github.com/maxs-well/ImageAlgorithmAccelerationByHLS/blob/master/image/3.png)

Figure 3 Processing plus dma transmission takes 34ms, which takes 653ms on average to process the same image under vs2015 where the hardware platform is i7-9750H 2.6GHz with 16GB RAM. The performance difference is nearly 20 times.



Vivado Block Design：

![](https://github.com/maxs-well/ImageAlgorithmAccelerationByHLS/blob/master/image/4.png)



FPGA Platform: PYNQ-Z2



#### Pseudo-color grayscale

Designed by woodfan

Not Work



#### rgb2gray

Designed by Fu Guohang

Not Work



Thanks to xilinx for organizing this event, and thank my teammate, Fu Guohang, who is not very familiar with hardware and has a lot of difficulties in learning but persisted. Thanks to my teammate, Yang Moyuan, who is still working during the day and insists on providing us with a lot of useful learning materials at night. Thanks to my teaching assistant colleague Li Yang, who has taken care of me a lot in class management



2020年新工科联盟-Xilinx暑期学校（Summer School）项目 \
2020 New Engineering Alliance -Xilinx Summer School Project

To Be Continued
