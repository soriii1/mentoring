import axios from "axios";
import { useEffect } from "react";


function mm(){
  useEffect(() => {
    axios.get("https://test-511o.onrender.com/")
    .then(res => console.log(res))
    .catch(err => console.log(err));   
  }, []);

} 