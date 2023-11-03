function fetchdata(){
    console.log("fetch data called")

    let d = null;
    fetch("https://jsonplaceholder.typicode.com/users")
    .then(function(data){
        console.log("promise sucess",data);
        return data.json()
    })
    .then(function(data){
        console.log("final data[0].username",data[0].username);
        let para = document.getElementById('username')
        for(let i=0; i < data.length; i++){
            let eachuser = document.createElement('h6');
            eachuser.innerHTML = "Welcome" + data[i].username
            para.appendChild(eachuser)
        }
        para.style.color = "blue"
        d = data;
})
.catch(function(error){
    console.log("promise failed", error)

});
console.log(d)
}

