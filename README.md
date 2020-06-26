# HPCTravelingSalesman

The travelling salesman problem (also called the travelling salesperson problem or TSP) asks the following question: "Given a list of cities and the distances between each pair of cities, what is the shortest possible route that visits each city and returns to the origin city?" It is an NP-hard problem in combinatorial optimization, important in theoretical computer science and operations research.

In our studies we want to deal with this problem / this question. For this reason, we are developing a tool based on a neural network that can approximately calculate this problem.

The aim is to have a program that calculates and visualizes the shortest path for the TSP for a given set of points.



### ---How to install and use QT-Creator---

1. download QT Creator Framework GUI: https://www.qt.io/download-thank-you?hsLang=en
    

2. install QT Creator Framework: start qt-unified-linux-x64-3.2.3-online.run
    Follow the installer and confirm the entries
    You have to create an account, all you need is an email address and password
    Check: I have read and approve the obligations of using Open Source QT
    Check: I am an individual person not using QT for any Company
    Confirm whether you want to provide user data to the developer / Contribute to QT Development
    Specify the installation directory "/ home / <user> / QT"

3. QT Einrichtung / QT Maintenance Tool
    Please select the components you want to install
        Developer abd Designer Tools
        QT 5.9.9    Something is needed ... this was Memory-saving
    I do read and agree to the terms contained in the license agreements
    Installation

    
4. Starte QT Creator
    Editieren / Edit
    Open file or project
        choose HPC_TSP_GUI/HPC_TSP.pro
        To start the GUI, press play at the bottom on the left  / Run (Strg + R)
          If there are problems, certain libaries may be missing
          Optional:       sudo apt-get install libglu1-mesa-dev
    

