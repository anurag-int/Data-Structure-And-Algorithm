const express = require("express");

// help us to send request to the front end and get data from it so.
const request = require("request");

const app = express();

app.get("/",(req, res)=>{
    
    let city = req.query.city;
    const request = require('request');
    request(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=0f5213284a41dea2b611538584de8310`,
     function (error, response, body) {
        if(response.statusCode == 200)
        {
            res.send(`The Weather in your city "${city}" is ${body.list[0].weather[0].description}`)
        }
      console.error('error:', error); // Print the error if one occurred
     
    });
});

app.listen(3000, ()=>{
    console.log("Server stated on the Port 3000");
});

