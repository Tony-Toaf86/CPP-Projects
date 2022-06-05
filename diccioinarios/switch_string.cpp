lude <iostream>
using namespace std;
int main()
{
int mes;
cout<<"Ingresa las primeras tres letras del mes que desee\n";
cin>>mes;
switch (mes)
{
    case 'ene':
        {       
    cout<<"El nombre del mes es enero\n ";
    break;
}
case 'feb':
    {
    cout<<"El nombre del mes es febrero\n";
    break;
}
    case 'mar':
        {       
    cout<<"El nombre del mes es marzo\n ";
    break;
}
    case 'abr':
        {       
    cout<<"El nombre del mes es abril\n ";
    break;
}
    case 'may':
        {       
    cout<<"El nombre del mes es mayo\n ";
    break;
}
    case 'jun':
        {       
    cout<<"El nombre del mes es junio\n ";
    break;
}
    case 'jul':
        {       
    cout<<"El nombre del mes es julio\n ";
    break;
}
    case 'ago':
        {       
    cout<<"El nombre del mes es agosto\n ";
    break;
}
    case 'sep':
        {       
    cout<<"El nombre del mes es septiembre\n ";
    break;
}
    case 'oct':
        {       
    cout<<"El nombre del mes es octubre\n ";
    break;
}
    case 'nov':
        {       
    cout<<"El nombre del mes es noviembre\n ";
    break;
}
    case 'dic':
        {       
    cout<<"El nombre del mes es diciembre\n ";
    break;
}
default:
cout<<"No es un mes";
}
system ("PAUSE");
return(0);
}