//jshint esversion:6
const express = require('express');
const app = express();

app.get("/", function(req, response){
    response.send("<h1>Hello World</h1>");
});


app.get("/contact", function(req,res){
    res.send("<h1>Contact me at: 31anuragupta@gmail.com</h1>");
});

app.get("/about", function(req,res){
    res.send("<h1>Hi,Name - Anurag Gupta</h1>");
});


app.get("/hobbies", function(req,res){
    res.send("<h1><ul>MY Hobbies : <li>coffee</li><li>Coding</li><li>Cricket</li></ul></h1>");

});

app.listen(3000,function(){
    console.log("Server started on port 3000");
});


