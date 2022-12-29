%{1,2,3,4,5,6,7,8,9,0,'*','#'}
lf = [697 770 852 941]; % Low frequency group
hf = [1209 1336 1477];  % High frequency group
n = input ("number of digits : ");
for k =1:n ,
      x = input ("Enter a number : ");
      switch x
          case 1
              u = lf(1);
              v = hf(1);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 2
              u = lf(1);
              v = hf(2);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 3
              u = lf(1);
              v = hf(3);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 4
              u = lf(2);
              v = hf(1);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 5
              u = lf(2);
              v = hf(2);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 6
              u = lf(2);
              v = hf(3);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 7
              u = lf(3);
              v = hf(1);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 8
              u = lf(3);
              v = hf(2);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);  
         case 9             
              u = lf(3);
              v = hf(3);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
          case '*'
              u = lf(4);
              v = hf(1);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
         case 0
              u = lf(4);
              v = hf(2);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);  
         case '#'           
              u = lf(4);
              v = hf(3);
              t=linspace(0,0.2,4000);
              tone =(0.15)*(sin(u*2*pi*t)+sin(v*2*pi*t));
              sil=zeros(1,150);
              total = [tone sil];
              sound(total,20000);
      end           
end  