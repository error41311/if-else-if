String weekDay = "SunDay";
String message = "";
void setup() 
{
  Serial.begin(115200);
}

void loop() {
   if (weekDay == "Monday")
  {
    message ="เรียนวิชาภาษาอังกฤษ";
  }
    else if (weekDay == "Tuesday")
    {
    message = "เรียนวิชาไมโครคอมโทรลเลอร์";
  } 
    if (weekDay == "Wednesday")
   {
    message = "โครงงาน";
   }
     else if (weekDay == "Thursday")
    {
    message = "เรียนโทรคมนาคมเบื้องต้น";
    }  
    else if (weekDay == "Friday")
    {
      message = "เรียนพึ้นฐานอิเล็กทรอนิกส์อัจฉริยะ";
    }
    
     else
    {
        message = "วันหยุดเสาร์-อาทิตย์";
    }
 
   Serial.println(message);
   delay(2000);
}
