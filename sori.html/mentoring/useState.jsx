import { useState } from "react";

export default function App(){
  const [click, setClick] = useState(0);

  const click1 = () =>{console.log("안녕"); setClick(1);}

  return (
    <>
      <button onClick={click1}>클릭</button>
    </>
  )
}
