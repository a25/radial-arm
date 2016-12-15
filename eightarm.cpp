// this is working software

#include <iostream>
#include <time.h>
#include <fstream>
#include<string>
#include <cstdio>
#include <iomanip>
#include <Windows.h>
#include "opencv2/opencv.hpp" 
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;
VideoCapture cap;
void foodarmcheck(char);
void calculateTime();
int seal=1;
	double totalCorrectTime=0.0;
float equation(int ,int ,int ,int ,int , int ,int);
int octang(int ,int );
int foodCount=0,foodCounter=-1,foodStart=0,foodStart2=0;
Point foodLoc[1][10];
int foodarm[8]={0};
string asd1;
int  vidindex=0;
double tempa=0.0,tempb=0.0,tempc=0.0,tempd=0.0,tempe=0.0,tempf=0.0,tempg=0.0,temph=0.0;
 ifstream indata;
 int clearLine=0;
	ofstream outdata;
	double veloci=0.0;
	int cnveloci=0;
	ofstream outdata1;
	ofstream outdata2;
	int res=0;  // trackbar variables
	int sta=0;
	int realti=0;  // if this is zero means data is used from usb not in real world
int ghp=0;
double angle=90;
int localposx=0;
int localposy=0;
int stopp=0;
int rat_bleft=17;//5  //17  //17
int rat_btop=14;//5  //5    //14
int rat_left=22;//16  //19  //22
int rat_top=26;//5  //26   //26
 double ff=0.0;
 Mat imgOriginal;
int positiona[100];
int positionb[100];
int positionc[100];
int positiond[100];
int positione[100];
int positionf[100];
int positiong[100];
int positionh[100];

int g_slider_position = 0;
int loc=0;
String id="z";   // if 0 means 0th region ,if 1 means 1st region ,if 2 means 2nd region
int cnta=-1,cntb=-1,cntc=-1,cntd=-1,cnte=-1,cntf=-1,cntg=-1,cnth=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty



int alte=-1;  //for alteration function increment value
int alte2=0;
int alte3=0;
int alte4=0;
int alte5=0;
int vicss=-1;

String alte1[200];//  this array where the ids of region will be placed
String vics[200];
double pointa[30];
double pointb[30];
double pointc[30];
double pointd[30];
double pointe[30];
double pointf[30];
double pointg[30];
double pointh[30];


double dist=0.0;
	double distx=0.0;
	double disty=0.0;

/// adding pixel distance


	//////

double totala=0.0;
double totalb=0.0;
double totalc=0.0;
double totald=0.0;
double totale=0.0;
double totalf=0.0;
double totalg=0.0;
double totalh=0.0;




double raw_totala=0.0;
double raw_totalb=0.0;
double raw_totalc=0.0;
double raw_totald=0.0;
double raw_totale=0.0;
double raw_totalf=0.0;
double raw_totalg=0.0;
double raw_totalh=0.0;


int at=0,bt=0,ct=0,dt=0,et=0,ft=0,gt=0,ht=0;  // this for determining whter the rat is in region a or b or c
int as=1,bs=1,cs=1,ds=1,es=1,fs=1,gs=1,hs=1;  // for starting every region timer 


int min_x0,max_x0,min_y0,max_y0=0;
int min_x1,max_x1,min_y1,max_y1=0;
int min_x2,max_x2,min_y2,max_y2=0;
int min_x3,max_x3,min_y3,max_y3=0;
int min_x4,max_x4,min_y4,max_y4=0;
int min_x5,max_x5,min_y5,max_y5=0;
int min_x6,max_x6,min_y6,max_y6=0;
int min_x7,max_x7,min_y7,max_y7=0;

int pp=1;

int total_regions=8; // this is total number of regions

int ab=0;

int for_just_starting_left_key=0;
int region=-1;  // this count of region if it s 1 means the points are selected for region 1
/// now 4 pints for region 1
Point pts1[1][4]; // for first region 4 points
Point corner2;
int cnt2=-1;
int start_region1=0;
Mat mMask1,tFront1;
int ass=1;
///////////////////////////////
void compute(Point[1][4]);
int eval(int qx,int qy,int wx,int wxx,int ey,int eyy);
void alterationCompute();
int alterationValue;



int selection=0;
	String extension=".csv";
	int number=1;
	int saver=0;
	String numb=to_string(number);
	String path="ashish"+numb+extension;
	String path1="ashish"+numb+".txt";
	String path2="rat_data"+numb+extension;
int cl=1;
double total_distance=0.0;
double total_distance_x=0.0;
double total_distance_y=0.0;


//////////////////////////////////////////////////////////////////////////////////////////////////////////
int previous_time=0;
int current_time=0;
int timea=0,timeb=0,timec=0,timed=0,timee=0,timef=0,timeg=0,timeh=0;


//////////////////////////////////////////////////////////////////////////////////////////////////////// timing



int entry=0;
Mat mMask,tFront;
Mat imgLines,imgTmp;

int ashish=0;
const int extreme=24;// limts of number to be selected
    int lineType = 8;                        
Point pts[1][extreme];



int cnt=-1;  // this is showing number of points selected

// Starting and ending points of the user's selection
Point corner1;
// ROI
Rect box;
// Callback function for mouse events
////////////////////////////////////////////////////////////////////////////////////////////////// new variables are merginig now

Point2f corner3;
int nums[4];  //these are distance between two pixels values
int start1=0; // for starting selecton process of convertin pixel value
int cntr=-1;
int cntl=-1;

int enter_value=0;
int selectionStart=0; // this pixel selection region and all sort of starting value 
Mat imgLiness;
    vector<Point2f> pts_dst;
    vector<Point2f> pts_src; // for calibration selected region 4 points
	   Mat h ;
	   double hh[4];
	  // void calculateCm(int x,int y); 
	   int rat=0;
	   int rat2=0;
	   Point rats[9];
	   void setValue();
	   void clearValue();

////////////////////////////////////////////////////////////////////////////////////////////////////
static void mouse_callback(int event, int x, int y, int, void *)
{  

	if(event == EVENT_RBUTTONDOWN && selectionStart==0)
	{ cout<< "you have pressed right button to start real thing"<<endl;
		entry=1;
		region++;
		cnt2=-1;
	  if(region<8){
		cout<<"you are going to be enter points for region number"<<"   "<<region<<endl;
		
		cout<<"suggestion: press left button for selecting regions"<<endl;
	  }
	  if(region==8){
		  cout<<"stop ppressing buttons"<<endl;
		  cout<<"now select center of maze by left in clockwise direction click"<<endl;
		 // cout <<"now u will enter region for setting camera origin"<<endl;
		  //selectionStart=1;  // here starts the region selection process for origin pixel
		  rat=1;
	  }
	


	}

	if((event == EVENT_LBUTTONDOWN ) && entry==1 && selectionStart==0){
		//cout<<"you are entering points for region number"<<"   "<<region<<endl;
		if (region<total_regions &&cnt2<4){
			cnt2++;
		corner2.x = x;
        corner2.y = y;
		pts1[0][cnt2]=Point(corner2.x,corner2.y);
        cout << "Corner "<<cnt2 <<" recorded at x:" << pts1[0][cnt2].x<<" recorded at y:" << pts1[0][cnt2].y <<"count no is :"<<cnt2<< endl;
		}
		if (cnt2==3){  // means total four cornerws are selected
			////////  do here
		if (region==0){
			compute(pts1);
		min_x0=pts1[0][0].x;
		max_x0=pts1[0][3].x;
		min_y0=pts1[0][0].y;
		max_y0=pts1[0][3].y;
		}

		if (region==1){
			compute(pts1);
		min_x1=pts1[0][0].x;
		max_x1=pts1[0][3].x;
		min_y1=pts1[0][0].y;
		max_y1=pts1[0][3].y;
		}

		if (region==2){
			compute(pts1);
		min_x2=pts1[0][0].x;
		max_x2=pts1[0][3].x;
		min_y2=pts1[0][0].y;
		max_y2=pts1[0][3].y;
		}

		if (region==3){
			compute(pts1);
		min_x3=pts1[0][0].x;
		max_x3=pts1[0][3].x;
		min_y3=pts1[0][0].y;
		max_y3=pts1[0][3].y;
		}
		if (region==4){
			compute(pts1);
		min_x4=pts1[0][0].x;
		max_x4=pts1[0][3].x;
		min_y4=pts1[0][0].y;
		max_y4=pts1[0][3].y;
		}

		if (region==5){
			compute(pts1);
		min_x5=pts1[0][0].x;
		max_x5=pts1[0][3].x;
		min_y5=pts1[0][0].y;
		max_y5=pts1[0][3].y;
		}

		if (region==6){
			compute(pts1);
		min_x6=pts1[0][0].x;
		max_x6=pts1[0][3].x;
		min_y6=pts1[0][0].y;
		max_y6=pts1[0][3].y;
		}

		if (region==7){
			compute(pts1);
		min_x7=pts1[0][0].x;
		max_x7=pts1[0][3].x;
		min_y7=pts1[0][0].y;
		max_y7=pts1[0][3].y;
		}

		

			cout<<"you have entered all points for region number"<<region<<endl;
			cout<<"now to enter new region press right button once again"<<endl;
		
		}

	}

	if (cnt<extreme && selection==0){

	
// When the left mouse button is pressed, record its position and save it in corner1
if((event == EVENT_LBUTTONDOWN ) )
{
	cnt++;
	
corner1.x = x;
corner1.y = y;
pts[0][cnt]=Point(corner1.x,corner1.y);
cout << "Corner "<<cnt <<" recorded at x:" << pts[0][cnt].x<<" recorded at y:" << pts[0][cnt].y <<"count no is :"<<cnt<< endl;

}
}
if(cnt>=extreme)        /// means cnt is now greater than extream
{  
		selection=1;  // here you will make selection=1 to start making reigion means now when the left button is pressed rgion wll be made
		mMask.create(imgOriginal.rows,imgOriginal.cols,imgOriginal.type());
		mMask.setTo(0);
		namedWindow("cropping", CV_WINDOW_AUTOSIZE);
		const Point*ppt[1] = { pts[0] };
		int npt[] = { extreme };

		
	
			 fillPoly(mMask,
            ppt,
            npt,
            1,
           Scalar(0xFF,0xFF,0xFF ),
            lineType );
		imshow("cropping",mMask);
	
	
	}


if(selectionStart==1){
	rat2=0;
	enter_value=1;
    cntr=1;
   }/////// ///////////////////////  end of selectionStart


if(rat>0 && rat<9){
	if((event == EVENT_LBUTTONDOWN ) ){
		rats[rat].x=x;
		rats[rat].y=y;
     cout<<"you entered number "<<rat<<"Point at ("<<rats[rat].x<<" ,"<<rats[rat].y<<")"<<endl;
	 
	 
	  
	  rat++;
	}
	if(rat==9
		){
		cout<<"octangle selction process finished"<<endl;
		cout<<"now enter  how many food u want to put"<<endl;
		 rat2=1;
		 rat=-1;
		 
	}

}///   end of rat

if(rat2==1){

	selectionStart=1;

	if(foodCounter==-1){
	cout<<"Put only numbers"<<endl;
	cin>>foodCount;
	cout<<"now press right button"<<endl;
	}
	foodStart=1;
	
}

if(event==EVENT_RBUTTONDOWN && foodStart==1){
	foodStart2=1;
	cout<<"all process finished1"<< endl;
}

if (foodStart2==1 && (event == EVENT_LBUTTONDOWN )){
	    rat2=11;
		cout<<"press left buttons to select the food points"<<endl;
	    foodCounter++;
		corner2.x = x;
        corner2.y = y;
		
	    foodLoc[0][foodCounter]=Point(corner2.x,corner2.y);;
	    
	    cout<<"you entered food at location of "<<foodLoc[0][foodCounter].x<<" ,"<<foodLoc[0][foodCounter].y<<" and food count is"<<foodCounter+1<<endl;
	    if(foodCounter==(foodCount-1)){
			foodStart2=11;
			cout<<"you entered all points"<<endl;
		}
}

}/// end of mouseCallback






/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main()
{
 
	cout<<"do you want tracking in real time or offline"<<endl;
	cout<<"press 0: for offline(not real time)"<<endl;
	cout<<"press 1: for realtime"<<endl;
	cin>>realti;
	outdata1.open("E:/rat/"+path1);
	outdata2.open("E:/rat/rat_data.csv");
	outdata2<<"file_name"<<","<<"Total alternation"<<","<<"Wrong alter"<<","<<"%SAS"<<","<<"AAR"<<","<<"AARR"<<","<<"SAR"<<","<<"SARR"<<","<<"TAE"<<","<<"total_VisitA"<<","<<"TimeA"<<","<<"%TimeA"<<","<<"Adist"<<","<<"%Adist"<<","<<"total_VisitB"<<","<<"TimeB"<<","<<"%TimeB"<<","<<"Bdist"<<","<<"%Bdist"<<",""total_VisitC"<<","<<"TimeC"<<","<<"%TimeC"<<","<<"Cdist"<<","<<"%Cdist"<<","<<"Total_dist"<<","<<"Total_time"<<","<<"Avg.Velocity"<<","<<"Total_X_axis_distance"<<","<<"Total_Y_axis_distance"<<endl;

	outdata.open("E:/rat/"+path);	
	

ash: ghp++;
	

	string asd="E:/bt ("+to_string(ghp)+").mp4";
    asd1="E:/rat/recorded ("+numb+").avi";
	cout<<"outside outside 1"<<endl;
//system("pause");
	if(realti==0){

	 cap.open(asd); //capture the video from usb
    

	}
	cout<<"frame count is "<<cap.get(CV_CAP_PROP_FRAME_COUNT)<<endl;


	if(realti==1 && ghp==1){
		int cam_num=0;
		cout<<"enter camera number"<<endl;
		cin>>cam_num;
	 cap.open(cam_num); //capture the video from camera
	cout<< asd<<endl;
	
	}
	    
	
	if ( !cap.isOpened() ) // if not success, exit program
{    
cout << "Cannot open the web cam" << endl;

outdata2.close();
return -1;
}

	cout<<path<<endl;
	cout<<path1<<endl;
    cout<<path2<<endl;
	
int tmpw = (int) cap.get(CV_CAP_PROP_FRAME_WIDTH);
int tmph = (int) cap.get(CV_CAP_PROP_FRAME_HEIGHT);
Size frameSize(static_cast<int>(tmpw), static_cast<int>(tmph));
VideoWriter writer (asd1, CV_FOURCC('P','I','M','1'), 30, frameSize, true); 

	
	
	



int iLowH = 0;
int iHighH = 179;
int iLowS = 0;
int iHighS = 255;
int iLowV =55;//184;//69
int iHighV = 255;
int erod=0;
int dilat=0;



namedWindow("thresh", CV_WINDOW_AUTOSIZE);
namedWindow("original", CV_WINDOW_AUTOSIZE);
namedWindow("cropp", CV_WINDOW_AUTOSIZE);
namedWindow("originall", CV_WINDOW_FREERATIO);

createTrackbar("Stop/Start", "originall", &cl,1);//cl
createTrackbar("ResetValue", "originall", &res, 1);    // use this in middel of wrong  detection it will not make new file 
createTrackbar("SetValues", "originall", &sta, 1);  // for real time only it should pe pressed when new rat is to be introduced it will stop the video and you have to start the video
createTrackbar("LowH", "originall", &iLowH, 179); //Hue (0 - 179)
createTrackbar("HighH", "originall", &iHighH, 179);
createTrackbar("LowS", "originall", &iLowS, 255); //Saturation (0 - 255)
createTrackbar("HighS", "originall", &iHighS, 255);
createTrackbar("LowV", "originall", &iLowV, 255);//Value (0 - 255)
createTrackbar("HighV", "originall", &iHighV, 255);
createTrackbar("width", "originall", &rat_bleft, 200);  // this is lower right 17
createTrackbar("height", "originall", &rat_btop, 200);  // this is lower right y coordinate 14
createTrackbar("offsetLeftOrigin", "originall", &rat_left, 200);  // this is upper left  x ccordinate 22
createTrackbar("offsetTopOrigin", "originall", &rat_top, 200);  //  this is upper left y coordinate 26

int iLastX = -1;
int end=0;
int iLastY = -1;
if(saver==0){
cap.read(imgTmp);
imgLines = Mat::zeros( imgTmp.size(), CV_8UC3 );
}
outdata<<"distance"<<","<<"time"<<","<<"velocity"<<","<<"total_x_distance"<<","<<"total_y_distance"<<endl;


//Create a black image with the size as the camera output


 


clock_t tStart = clock();


double dd=0.0;

while (1)
{ 
	
	saver++;
    

	if(number==1 && saver==2 ){
		cl=0;
		setTrackbarPos("Stop/Start", "originall",cl);//cl
	}
	if(cl==1){



if(ab==1){
	ab=0;   
	outdata.close();    // actually here the previous file closes and new file is made
	outdata1.close();
	//outdata2.close();
    cout<<"hello"+path<<endl;	
	cout<<"notepad file"<<path1<<endl;
	cout<<"excel rat file"<<path2<<endl;
	 outdata.open("E:/rat/"+path);
	  outdata1.open("E:/rat/"+path1);
	 // outdata2.open("E:/rat/"+path2);
	 ashish=0;   // this is used for restarting the timer when ashish ==1 timer resets and ther is ashish++ so i have putted ashish=0 so that when it goes to ab==1 ashish++ happens and ashish==1 executes
	 //outdata<<"distance"<<","<<"time"<<","<<"velocity"<<","<<"total_x_distance"<<","<<"total_y_distance"<<endl;
outdata<<"distance"<<","<<"time"<<","<<"velocity"<<","<<"total_x_distance"<<","<<"total_y_distance"<<endl;

}
bool bSuccess = cap.read(imgOriginal);

if (!bSuccess) //if not success, break loop
{
cout << "Cannot read a frame from video stream" << endl;

imgLines.setTo(Scalar(0,0,0));
alterationCompute();

cout<<"  "<<endl;
cout<<"all the below datas are going into path"<<" "<<path1<<endl;
cout<<"all the below datas rats are going into path"<<" "<<path2<<endl;

//outdata1<<"Total alternation"<<"  "<<alte2<<endl;
//outdata1<<"Wrong alternations is"<<" "<<(alte3+alte4)<<endl;
double cntsar=0.0,cntaa=0.0,cntss=0.0;
/*if((((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)!=0){
	outdata1<<"% spontaneous alternation score"<< (alte2*100)/(((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)<<"%"<<endl;
    cntss= (alte2*100)/(((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2);
}
if((((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)==0){
	outdata1<<"% spontaneous alternation score"<< "can't determine because denominator is zero means (n-2)==0"<<endl;
	cntss=0;
}
*/
/*
if((cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)!=0){

outdata1<<"Alternate arm repeat"<<" "<<alte3<<"  "<<endl;
outdata1<<"Alternate arm repeat ratio"<<" "<<((alte3*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8))<<"  "<<"%"<<endl;

outdata1<<"number of simialar arm repeat "<<"  "<<alte5<<" "<<endl;
outdata1<<"number of simialar arm repeat ratio "<<"  "<<((alte5*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8))<<" "<<"%"<<endl;
cntsar=((alte5*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8));//similar arm repeat
cntaa=((alte3*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)); // alternate arm repeat
}

if((cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)==0){
	cntsar=0;
	cntaa=0;
	outdata1<<"Alternate arm repeat ratio"<<" "<<0<<"  "<<" %"<<endl;
outdata1<<"number of simialar arm repeat ratio "<<"  "<<0<<" %"<<endl;
}

*/
outdata1<<"Total arm entry "<<(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)<<endl;
outdata1<<"number of time rat moved in arm a "<<cnta+1<<endl;
outdata1<<"number of time rat moved in arm b "<<cntb+1<<endl;
outdata1<<"number of time rat moved in arm c "<<cntc+1<<endl;
outdata1<<"number of time rat moved in arm d "<<cntd+1<<endl;
outdata1<<"number of time rat moved in arm e "<<cnte+1<<endl;
outdata1<<"number of time rat moved in arm f "<<cntf+1<<endl;
outdata1<<"number of time rat moved in arm g "<<cntg+1<<endl;
outdata1<<"number of time rat moved in arm h "<<cnth+1<<endl;
outdata1<<"total pattern is ";

for (int i=0;i<alte+1;i++){
		
	outdata1<<alte1[i]<<"-";
}
cout<<"\n"<<endl;
cout<<" "<<endl;
raw_totala=0;
raw_totalb=0;
raw_totalc=0;
raw_totald=0;
raw_totale=0;
raw_totalf=0;
raw_totalg=0;
raw_totalh=0;

outdata1<<"total time in arm a"<<" ";
 for (int i=0;i<cnta+1;i++){
			  double a=pointa[i];
			   raw_totala=raw_totala+a;
		   } 
  outdata1<< raw_totala<<endl;
outdata1<<"total time in arm b"<<" ";
  for (int i=0;i<cntb+1;i++){
			  double a=pointb[i];
			   raw_totalb=raw_totalb+a;
		   }
   outdata1<< raw_totalb<<endl;
outdata1<<"total time in arm c"<<" ";
 for (int i=0;i<cntc+1;i++){
			  double a=pointc[i];
			   raw_totalc=raw_totalc+a;
		   }  
 outdata1<< raw_totalc<<endl;
 outdata1<<"total time in arm d"<<" ";
  for (int i=0;i<cntd+1;i++){
			  double a=pointd[i];
			   raw_totald=raw_totald+a;
		   }  
 outdata1<< raw_totald<<endl;
 outdata1<<"total time in arm e"<<" ";
  for (int i=0;i<cnte+1;i++){
			  double a=pointe[i];
			   raw_totale=raw_totale+a;
		   }  
 outdata1<< raw_totale<<endl;
 outdata1<<"total time in arm f"<<" ";
  for (int i=0;i<cntf+1;i++){
			  double a=pointf[i];
			   raw_totalf=raw_totalf+a;
		   }  
 outdata1<< raw_totalf<<endl;
 outdata1<<"total time in arm g"<<" ";
  for (int i=0;i<cntg+1;i++){
			  double a=pointg[i];
			   raw_totalg=raw_totalg+a;
		   }  
  outdata1<< raw_totalg<<endl;
  outdata1<<"total time in arm h"<<" ";
   for (int i=0;i<cnth+1;i++){
			  double a=pointh[i];
			   raw_totalh=raw_totalh+a;
		   }  
 outdata1<< raw_totalh<<endl;
 
 double vg=(double)(current_time-tStart)/CLOCKS_PER_SEC;
 outdata1<<"Total Time in ramp"<<" "<<vg<<" second"<<endl;
 outdata1<<"% Time in arm A"<<" "<<(raw_totala*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm B"<<" "<<(raw_totalb*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm C"<<" "<<(raw_totalc*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm D"<<" "<<(raw_totald*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm E"<<" "<<(raw_totale*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm F"<<" "<<(raw_totalf*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm G"<<" "<<(raw_totalg*100)/vg<<" %"<<endl;
 outdata1<<"% Time in arm H"<<" "<<(raw_totalh*100)/vg<<" %"<<endl;
 outdata1<<"total distance"<< "  "<<total_distance<< "pixel"<<endl;
// calculateTime();
 outdata1<<"TOTAL CORRECT TIME "<<totalCorrectTime<<endl;

 outdata1<<"total distance covered in arm a"<<" ";
 ff=0.0;
 for (int i=0;i<cnta+1;i++){
			ff+=positiona[i];
			
		   }  
 tempa=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in a "<<((ff*100)/total_distance)<<endl;

  outdata1<<"total distance covered in arm b"<<" ";
 ff=0.0;
 for (int i=0;i<cntb+1;i++){
			ff+=positionb[i];
			
		   }  
  tempb=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in b "<<((ff*100)/total_distance)<<endl;

  outdata1<<"total distance covered in arm c"<<" ";
 ff=0.0;
 for (int i=0;i<cntc+1;i++){
			ff+=positionc[i];
			
		   }  
  tempc=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in c "<<((ff*100)/total_distance)<<endl;
/////////////////////
    outdata1<<"total distance covered in arm d"<<" ";
   ff=0.0;
 for (int i=0;i<cntd+1;i++){
			ff+=positiond[i];
			
		   }  
  tempd=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in d "<<((ff*100)/total_distance)<<endl;


/////////
    outdata1<<"total distance covered in arm e"<<" ";
   ff=0.0;
 for (int i=0;i<cnte+1;i++){
			ff+=positione[i];
			
		   }  
  tempe=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in e"<<((ff*100)/total_distance)<<endl;

////////
    outdata1<<"total distance covered in arm f"<<" ";
   ff=0.0;
 for (int i=0;i<cntf+1;i++){
			ff+=positionf[i];
			
		   }  
  tempf=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in f "<<((ff*100)/total_distance)<<endl;
  ////

   outdata1<<"total distance covered in arm g"<<" ";
   ff=0.0;
 for (int i=0;i<cntg+1;i++){
			ff+=positiong[i];
			
		   }  
  tempg=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in g "<<((ff*100)/total_distance)<<endl;
  ///
    outdata1<<"total distance covered in arm h"<<" ";
   ff=0.0;
 for (int i=0;i<cnth+1;i++){
			ff+=positionh[i];
			
		   }  
  temph=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in h "<<((ff*100)/total_distance)<<endl;
  //////////////////



  outdata1<<"average velocity"<<(double)(veloci/cnveloci)<<endl;
outdata1<<" total x distance covered "<<total_distance_x<<" pixel"<<endl;
outdata1<<" total y distance covered "<<total_distance_y<<" pixel"<<endl;
//outdata2<<"rat"+numb<<","<<alte2<<","<<(alte3+alte4)<<","<<cntss<<","<<alte3<<","<<cntaa<<","<<alte5<<","<<cntsar<<","<<(cnta+cntb+cntc+3)<<","<<cnta+1<<","<<raw_totala<<","<<(raw_totala*100)/vg<<","<<tempa<<","<<((tempa*100)/total_distance)<<","<<cntb+1<<","<<raw_totalb<<","<<(raw_totalb*100)/vg<<","<<tempb<<","<<((tempb*100)/total_distance)<<','<<cntc+1<<","<<raw_totalc<<","<<(raw_totalc*100)/vg<<","<<tempc<<","<<((tempc*100)/total_distance)<<","<<total_distance<<","<<vg<<","<<(double)(veloci/cnveloci)<<","<<total_distance_x<<","<<total_distance_y<<endl;
         //ta         //wr                 //sas                                             //aar        aarr                                  sar              sarr                               tae                    totalvisA      timea               %a                      adist           %adsit                                                                                                               ?%b        
//resetting distance in a b and c indivdual
 for (int i=0;i<cnta+1;i++){
	 positiona[i]=0;
 }
  for (int i=0;i<cntb+1;i++){
	   positionb[i]=0;
 }
   for (int i=0;i<cntc+1;i++){
	    positionc[i]=0;
 }///
    for (int i=0;i<cntd+1;i++){
	 positiond[i]=0;
 }
  for (int i=0;i<cnte+1;i++){
	   positione[i]=0;
 }
   for (int i=0;i<cntf+1;i++){
	    positionf[i]=0;
 }//

    for (int i=0;i<cntg+1;i++){
	    positiong[i]=0;
 }//

	 for (int i=0;i<cnth+1;i++){
	    positionh[i]=0;
 }//

	 for (int i=0;i<8;i++){
foodarm[i]=0;
}




 //
loc=0;  // this alteraton prints position
raw_totala=0; // these makes total each arm time zero;
raw_totalb=0; 
raw_totalc=0; 
raw_totald=0; // these makes total each arm time zero;
raw_totale=0; 
raw_totalf=0; 
raw_totalg=0; // these makes total each arm time zero;
raw_totalh=0; 





cnta=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cntb=-1;
cntc=-1;

cntd=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cnte=-1;
cntf=-1;

cntg=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cnth=-1;

alte=-1;  //for alteration function increment value
vicss=-1;
alte2=0;
alte3=0;
alte4=0;
alte5=0;
as=1;
bs=1;
cs=1;
ds=1;
es=1;
fs=1;
gs=1;
hs=1;
seal=1;
 dist=0.0;


total_distance=0;
	total_distance_x=0;
	total_distance_y=0;
	 total_distance=0.0;
total_distance_x=0.0;
total_distance_y=0.0;
veloci=0.0;
cnveloci=0;
// alte1[alte]=id;
//pointa[cnta]=(double)(current_time-timea)/CLOCKS_PER_SEC;
number=number++;
ab=1;
numb=to_string(number);
path="ashish"+numb+extension;
path1="ashish"+numb+".txt";
path2="rat_data"+numb+extension;
cout<<"E:/rat/"+path<<endl;
cout<<"notepad path"<<"E:/rat/"<<path1<<endl;

goto ash;

break;
}

//int current_pos = (int)cap.get(cv::CAP_PROP_POS_FRAMES);

//setTrackbarPos("Position", "original", current_pos);

     
	






if(entry==1){
	/*ashish++;
	if(ashish==1){
	 tStart = clock();
	}*/
	bitwise_and(imgOriginal, mMask, tFront);
	
	dd=(double)(clock() - tStart)/CLOCKS_PER_SEC;
	putText(imgOriginal,to_string(dd),Point(10,10),1,1,Scalar(255,255,255));
	putText(imgOriginal,"file open is"+path,Point(200,10),1,1,Scalar(255,255,255));
	putText(imgOriginal,"Notepad file open is"+path1,Point(200,40),1,1,Scalar(255,255,255));
	putText(imgOriginal,"Excel data file open is"+path2,Point(200,70),1,1,Scalar(255,255,255));
	
Mat imgHSV;

cvtColor(tFront, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV
//Mat imgThresholded2;
Mat imgThresholded;


inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image



imshow("thresh",imgThresholded);
if(clearLine==1){
	clearLine=0;
imgLines.setTo(Scalar(0,0,0));
}
Moments oMoments = moments(imgThresholded);
double dM01 = oMoments.m01;
double dM10 = oMoments.m10;



double dArea = oMoments.m00;
  double instant_time=0;
if (dArea > 10000)
{ashish++;
	if(ashish==1){
	 tStart = clock();

	}
//calculate the position of the ball
int posX = dM10 / dArea;
int posY = dM01 / dArea;
localposx=posX;
localposy=posY;
current_time = clock();
rectangle(imgOriginal,Point(posX-rat_left,posY-rat_top),Point(posX+rat_bleft,posY+rat_btop),Scalar(0,255,0),2,8);
if (iLastX >= 0 && iLastY >= 0 && posX >= 0 && posY >= 0)
{
	if (region==8)
	{
		if (ass==1){
			ass++;
			
		}

		   

	
	////////////////////////////////////////////////////////////////////////////////////////////////////////  regon  AA	
		if (eval (posX,posY,min_x0,max_x0,min_y0,max_y0)){
			id='A';
			


			
			putText(imgOriginal,"rat entered in regon A",Point(160,320),1,1,Scalar(0,255,0));

			if (as==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			as=0;
			
			cnta++;    //extrea
			timea=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"A"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			bs=1;
			cs=1;
			ds=1;
			es=1;
			fs=1;
			gs=1;
			hs=1;
		   positiona[cnta]+=dist;	
		   
		   pointa[cnta]=(double)(current_time-timea)/CLOCKS_PER_SEC;//extra
		   raw_totala=0;                         
			
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  REGION B


		if (eval (posX,posY,min_x1,max_x1,min_y1,max_y1)){
			id='B';
		
			//alteration(id);
			putText(imgOriginal,"rat entered in regon B",Point(160,320),1,1,Scalar(0,255,0));
			if (bs==1){
				loc+=20;
	putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
	         alte++;
	        alte1[alte]=id;
			bs=0;
		
			timeb=current_time;
			cntb++  ;  
			cout<<"B"<<endl;
			}
			as=1;
			cs=1;
			ds=1;
			es=1;
			fs=1;
			gs=1;
			hs=1;
			//cout<<"value of bs is "<<bs<<endl;
			   pointb[cntb]=(double)(current_time-timeb)/CLOCKS_PER_SEC;
		   raw_totalb=0; 
		    positionb[cntb]+=dist;
			
			
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////  REGION C

	
		if (eval (posX,posY,min_x2,max_x2,min_y2,max_y2) ){
			id='C';
			putText(imgOriginal,"rat entered in regon C",Point(160,320),1,1,Scalar(0,255,0));
			if (cs==1){
				loc+=20;
           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
		   alte++;
	        alte1[alte]=id;
			cs=0;
		
			timec=current_time;
			cntc++;    
			cout<<"C"<<endl;
			}
		//	cout<<"value of cs is "<<cs<<endl;
			as=1;
			bs=1;
			ds=1;
			es=1;
			fs=1;
			gs=1;
			hs=1;

			   pointc[cntc]=(double)(current_time-timec)/CLOCKS_PER_SEC;//extra
		   raw_totalc=0;    
		    positionc[cntc]+=dist;
	        
		  
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// regiond
		if (eval (posX,posY,min_x3,max_x3,min_y3,max_y3)){
			id='D';
			putText(imgOriginal,"rat entered in regon d",Point(160,320),1,1,Scalar(0,255,0));

			if (ds==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			ds=0;
			
			cntd++;    //extrea
			timed=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"D"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			as=1;
			bs=1;
			cs=1;
			es=1;
			fs=1;
			gs=1;
			hs=1;
				
		   positiond[cntd]+=dist;	
		   
		   pointd[cntd]=(double)(current_time-timed)/CLOCKS_PER_SEC;//extra
		   raw_totald=0;                         
			
		}


//////////////////////////////////////////////////////////////////////////////////////////////////// position e
		if (eval (posX,posY,min_x4,max_x4,min_y4,max_y4)){
			id='E';
			putText(imgOriginal,"rat entered in regon E",Point(160,320),1,1,Scalar(0,255,0));

			if (es==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			es=0;
			
			cnte++;    //extrea
			timee=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"E"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			as=1;
			bs=1;
			cs=1;
			ds=1;
			fs=1;
			gs=1;
			hs=1;
				
		   positione[cnte]+=dist;	
		   
		   pointe[cnte]=(double)(current_time-timee)/CLOCKS_PER_SEC;//extra
		   raw_totale=0;                         
			
		}


/////////////////////////////////////////////////////////////////////////////////////////////////////position f
		if (eval (posX,posY,min_x5,max_x5,min_y5,max_y5)){
			id='F';
			putText(imgOriginal,"rat entered in regon F",Point(160,320),1,1,Scalar(0,255,0));

			if (fs==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			fs=0;
			
			cntf++;    //extrea
			timef=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"F"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			as=1;
			bs=1;
			cs=1;
			ds=1;
			es=1;
			gs=1;
			hs=1;

				
		   positionf[cntf]+=dist;	
		   
		   pointf[cntf]=(double)(current_time-timef)/CLOCKS_PER_SEC;//extra
		   raw_totalf=0;                         
			
		}


////////////////////////////////////////////////////////////////////////  position g
	if (eval (posX,posY,min_x6,max_x6,min_y6,max_y6)){
			id='G';
			putText(imgOriginal,"rat entered in regon G",Point(160,320),1,1,Scalar(0,255,0));

			if (gs==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			gs=0;
			
			cntg++;    //extrea
			timeg=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"G"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			as=1;
			bs=1;
			cs=1;
			ds=1;
			es=1;
			fs=1;
			hs=1;

				
		   positiong[cntg]+=dist;	
		   
		   pointg[cntg]=(double)(current_time-timeg)/CLOCKS_PER_SEC;//extra
		   raw_totalg=0;                         
			
		}


/////////////////////////////////////////////////////////////////////// position h

		if (eval (posX,posY,min_x7,max_x7,min_y7,max_y7)){
			id='H';
			putText(imgOriginal,"rat entered in regon H",Point(160,320),1,1,Scalar(0,255,0));

			if (hs==1){
				loc+=20;
	           putText( imgLines,id+"-",Point(loc,20),1,1,Scalar(255,255,255));
			hs=0;
			
			cnth++;    //extrea
			timeh=current_time;
			alte++;
	        alte1[alte]=id;
			cout<<"H"<<endl;
			//raw_totala=raw_totala+totala;  // this is final total  uncomment this
			}
			//cout<<"value of as is "<<as<<endl;
			as=1;
			bs=1;
			cs=1;
			ds=1;
			es=1;
			fs=1;
			gs=1;
			

				
		   positionh[cnth]+=dist;	
		   
		   pointh[cnth]=(double)(current_time-timeh)/CLOCKS_PER_SEC;//extra
		   raw_totalh=0;                         
			
		}


///////////////////////////////////////////////////


			if(!(eval (posX,posY,min_x0,max_x0,min_y0,max_y0))&&	
			   !(eval (posX,posY,min_x1,max_x1,min_y1,max_y1))&&
			    !( eval (posX,posY,min_x2,max_x2,min_y2,max_y2))&&
				!(eval (posX,posY,min_x3,max_x3,min_y3,max_y3))&&	
			   !(eval (posX,posY,min_x4,max_x4,min_y4,max_y4))&&
			    !( eval (posX,posY,min_x5,max_x5,min_y5,max_y5))&&
				!(eval (posX,posY,min_x6,max_x6,min_y6,max_y6))&&	
			   !(eval (posX,posY,min_x7,max_x7,min_y7,max_y7))
			   
				){ 
			  //b_left,b_top
				//int rat_bleft=5;
                //int rat_btop=5;

					//cout<<"this is equation1 this should positive"<<equation(posX,posY,rats[1].x,rats[8].x,rats[1].y,rats[8].y,1)<<" this is rat cordinate (" <<posX<<" ,"<<posY<<" )"<<endl;
			        //cout<<"this is equation2 should positive "<<equation(posX,posY,rats[2].x,rats[3].x,rats[2].y,rats[3].y,1)<<" this is rat cordinate (" <<posX<<" ,"<<posY<<" )"<<endl;
				
                if( octang(posX,posY)){
				//if(posX-rat_left>rats[3].x && posX+rat_bleft>rats[3].x && posX-rat_left<rats[2].x&& posX+rat_bleft<rats[2].x && posY-rat_top>rats[1].y && posY+ rat_btop>rats[1].y && ((posY-rat_top<rats[2].y && posY+ rat_btop<rats[2].y )||(posY-rat_top<rats[3].y && posY+ rat_btop<rats[3].y ))){
			     
			
			 line(imgOriginal,rats[1],rats[5 ],Scalar(255,0,0),2,8);

				  
			   as=1;
			   bs=1;
			   cs=1;
			   ds=1;
			    es=1;
			   fs=1;
			   gs=1;
			   hs=1;
		      
			  }
			
			
			
			
			
			
			
			}///////////////////end of if
			 


	}
	line(imgLines, Point(posX, posY), Point(iLastX, iLastY), Scalar(0,0,255), 2);
	
	int xx=pow((posX-iLastX),2);
	int yy=pow((posY-iLastY),2);

	 dist=(double)sqrt(xx+yy);     // thsi iin pixel distance
	 

	double distx=(double)sqrt(xx);///  thsi only in x drection tralvell in pixel
	double disty=(double)sqrt(yy);// this is only in y direction travel in pixel

	

	
	
	
	total_distance+=dist;


	total_distance_x+=distx;


	total_distance_y+=disty;
	


	if (previous_time>0){
       instant_time=(double)(current_time-previous_time)/CLOCKS_PER_SEC;
	  //cout<<"Veloity is "<<(dist/instant_time)<<" px/second"<<endl;
	}
	cnveloci+=1;
	veloci+=(dist/instant_time);
	
	//putText(imgOriginal,"distance is "+to_string(dist),Point(150,300),1,1,Scalar(255,255,255));//uncomment this
	//putText(imgOriginal,"Total distance is "+to_string(total_distance),Point(150,400),1,1,Scalar(255,255,255));// uncomment this
	outdata<<total_distance<<","<<(double)(current_time-tStart)/CLOCKS_PER_SEC<<","<<(dist/instant_time)<<","<<total_distance_x<<","<<total_distance_y<<endl;
	//cout<<(double)(current_time-tStart)/CLOCKS_PER_SEC<<endl;  // uncomment this

}
iLastX = posX;
iLastY = posY;
previous_time=current_time;



}

if(selectionStart==1){
	//rectangle(imgLines,Point(rats.x-15,rats.y-15),Point(rats.x+20,rats.y+20),Scalar(255,0,0),4,8);
	
	line(imgLines,Point(rats[1].x,rats[1].y),Point(rats[2].x,rats[2].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[2].x,rats[2].y),Point(rats[3].x,rats[3].y),Scalar(255,0,0),4,8);
	putText(imgLines,to_string(1),Point(rats[1].x,rats[1].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(2),Point(rats[2].x,rats[2].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(3),Point(rats[3].x,rats[3].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(4),Point(rats[4].x,rats[4].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(5),Point(rats[5].x,rats[5].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(6),Point(rats[6].x,rats[6].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(7),Point(rats[7].x,rats[7].y),1,1,Scalar(255,0,0));
	putText(imgLines,to_string(8),Point(rats[8].x,rats[8].y),1,1,Scalar(255,0,0));
	line(imgLines,Point(rats[3].x,rats[3].y),Point(rats[4].x,rats[4].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[4].x,rats[4].y),Point(rats[5].x,rats[5].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[5].x,rats[5].y),Point(rats[6].x,rats[6].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[6].x,rats[6].y),Point(rats[7].x,rats[7].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[7].x,rats[7].y),Point(rats[8].x,rats[8].y),Scalar(255,0,0),4,8);
	line(imgLines,Point(rats[8].x,rats[8].y),Point(rats[1].x,rats[1].y),Scalar(255,0,0),4,8);
	
}
putText(tFront,to_string(dd),Point(10,10),1,1,Scalar(255,255,255));

if(foodStart2=11){
	for(int i=0;i<foodCount;i++){
	circle(imgLines,Point(foodLoc[0][i].x,foodLoc[0][i].y),5,Scalar(0,255,0),1,8);////////////////////////////////////////////////////////////////////////
	if ((localposx<foodLoc[0][i].x+15 && localposx>foodLoc[0][i].x-15 )&&(localposy<foodLoc[0][i].y+15 && localposy>foodLoc[0][i].y-15 )){
		//cout<<"Arm visited "<<id<<endl;
		vicss++;
		vics[vicss]=id;
		if ((vicss+1)!=foodCount){
			 foodarmcheck(id);// puts 1 in the cooressponding arm id if food is present


		}
		
		if(seal==1 && ((vicss+1)==foodCount)){
			seal=0;
			totalCorrectTime=(double)(current_time-tStart)/CLOCKS_PER_SEC;
		}

	}
	}
	//CV_FILLED
	
}

tFront = tFront + imgLines;
writer <<tFront;
imshow("cropp",tFront);


}


}
if(cl==0){
rectangle(imgOriginal,Point(localposx-rat_left,localposy-rat_top),Point(localposx+rat_bleft,localposy+rat_btop),Scalar(0,255,0),2,8);
}
imshow("original",imgOriginal);  // show original Image and used for cropping interction


setMouseCallback("original", mouse_callback);



if(res==1){    // use this in middel of wrong  detection it will not make new file 
	cl=0;
	setTrackbarPos("Stop/Start", "originall",cl);//cl
	clearValue();
}




if(sta==1){  // use this for new rat intro
	cl=0;
	//cout<<"outside 1"<<endl;
//	system("pause");
	//cout<<"outside 2"<<endl;
	setTrackbarPos("Stop/Start", "originall",cl);//cl
//	system("pause");
	 //this will write data and make new file and reset the data as well
	
	//imgLines = Mat::zeros( imgTmp.size(), CV_8UC3 );
	cout<<"outside 3"<<endl;
//	system("pause");
alterationCompute();

cout<<"  "<<endl;
cout<<"all the below datas are going into path"<<" "<<path1<<endl;
cout<<"all notepad data also going to "<<path2<<endl;
outdata1<<"Total alternation"<<"  "<<alte2<<endl;
outdata1<<"Wrong alternations is"<<" "<<(alte3+alte4)<<endl;
double cntss=0.0,cntsar=0.0,cntaa=0.0;
/*if((((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)!=0){
	cntss= (alte2*100)/(((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2);
	outdata1<<"% spontaneous alternation score"<< (alte2*100)/(((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)<<"%"<<endl;}
if((((cnta+1)+(cntb+1)+(cntc+1)+(cntd+1)+(cnte+1)+(cntf+1)+(cntg+1)+(cnth+1))-2)==0){
	cntss=0;
	outdata1<<"% spontaneous alternation score"<< "can't determine because denominator is zero means (n-2)==0"<<endl;
}

if((cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)!=0){
	cntsar=((alte5*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8));//similar arm repeat
cntaa=((alte3*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)); // alternate arm repeat
	outdata1<<"Alternate arm repeat"<<" "<<alte3<<"  "<<endl;
outdata1<<"Alternate arm repeat ratio"<<" "<<((alte3*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8))<<"  "<<"%"<<endl;

outdata1<<"number of simialar arm repeat "<<"  "<<alte5<<" "<<endl;
outdata1<<"number of simialar arm repeat ratio "<<"  "<<((alte5*100)/(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8))<<" "<<"%"<<endl;


}

if((cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)==0){
	cntsar=0.0;
	cntaa=0.0;
	outdata1<<"Alternate arm repeat ratio"<<" "<<0<<"  "<<" %"<<endl;
outdata1<<"number of simialar arm repeat ratio "<<"  "<<0<<" %"<<endl;
}*/
outdata1<<"Total arm entry "<<(cnta+cntb+cntc+cntd+cnte+cntf+cntg+cnth+8)<<endl;
outdata1<<"number of time rat moved in arm a "<<cnta+1<<endl;
outdata1<<"number of time rat moved in arm b "<<cntb+1<<endl;
outdata1<<"number of time rat moved in arm c "<<cntc+1<<endl;
outdata1<<"number of time rat moved in arm d "<<cntd+1<<endl;
outdata1<<"number of time rat moved in arm e "<<cnte+1<<endl;
outdata1<<"number of time rat moved in arm f "<<cntf+1<<endl;
outdata1<<"number of time rat moved in arm g "<<cntg+1<<endl;
outdata1<<"number of time rat moved in arm h "<<cnth+1<<endl;

outdata1<<"total pattern is ";

for (int i=0;i<alte+1;i++){
		
	outdata1<<alte1[i]<<"-";
}
cout<<"\n"<<endl;
cout<<" "<<endl;
raw_totala=0;
raw_totalb=0;
raw_totalc=0;
raw_totald=0;
raw_totale=0;
raw_totalf=0;
raw_totalg=0;
raw_totalh=0;


outdata1<<"total time in arm a"<<" ";
 for (int i=0;i<cnta+1;i++){
			  double a=pointa[i];
			   raw_totala=raw_totala+a;
		   } 
  outdata1<< raw_totala<<endl;
outdata1<<"total time in arm b"<<" ";
  for (int i=0;i<cntb+1;i++){
			  double a=pointb[i];
			   raw_totalb=raw_totalb+a;
		   }
   outdata1<< raw_totalb<<endl;
outdata1<<"total time in arm c"<<" ";
 for (int i=0;i<cntc+1;i++){
			  double a=pointc[i];
			   raw_totalc=raw_totalc+a;
		   }  
 outdata1<< raw_totalc<<endl;
 outdata1<<"total time in arm d"<<" ";
  for (int i=0;i<cntd+1;i++){
			  double a=pointd[i];
			   raw_totald=raw_totald+a;
		   }  
 outdata1<< raw_totald<<endl;
 outdata1<<"total time in arm e"<<" ";
  for (int i=0;i<cnte+1;i++){
			  double a=pointe[i];
			   raw_totale=raw_totale+a;
		   }  
 outdata1<< raw_totale<<endl;
outdata1<<"total time in arm f"<<" ";
  for (int i=0;i<cntf+1;i++){
			  double a=pointf[i];
			   raw_totalf=raw_totalf+a;
		   }  
 outdata1<< raw_totalf<<endl;
 outdata1<<"total time in arm g"<<" ";
  for (int i=0;i<cntg+1;i++){
			  double a=pointg[i];
			   raw_totalg=raw_totalg+a;
		   }  
 outdata1<< raw_totalg<<endl;
 outdata1<<"total time in arm h"<<" ";
  for (int i=0;i<cnth+1;i++){
			  double a=pointh[i];
			   raw_totalh=raw_totalh+a;
		   }  
 outdata1<< raw_totalh<<endl;
 double vg=(double)(current_time-tStart)/CLOCKS_PER_SEC;
 outdata1<<"Total Time in ramp"<<" "<<vg<<" second"<<endl;
 outdata1<<"% Time in arm A"<<" "<<(raw_totala*100)/vg<<" %"<<endl;
  outdata1<<"% Time in arm B"<<" "<<(raw_totalb*100)/vg<<" %"<<endl;
   outdata1<<"% Time in arm C"<<" "<<(raw_totalc*100)/vg<<" %"<<endl;
    outdata1<<"% Time in arm D"<<" "<<(raw_totald*100)/vg<<" %"<<endl;
  outdata1<<"% Time in arm E"<<" "<<(raw_totale*100)/vg<<" %"<<endl;
   outdata1<<"% Time in arm F"<<" "<<(raw_totalf*100)/vg<<" %"<<endl;
    outdata1<<"% Time in arm G"<<" "<<(raw_totalg*100)/vg<<" %"<<endl;
  outdata1<<"% Time in arm H"<<" "<<(raw_totalh*100)/vg<<" %"<<endl;

  outdata1<<"total distance"<< "  "<<total_distance<< "pixel"<<endl;
 outdata1<<"total distance covered in arm a"<<" ";
 ff=0.0;
 for (int i=0;i<cnta+1;i++){
			ff+=positiona[i];
			
		   }  
 

 tempa=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in a "<<((ff*100)/total_distance)<<endl;

  outdata1<<"total distance covered in arm b"<<" ";
 ff=0.0;
 for (int i=0;i<cntb+1;i++){
			ff+=positionb[i];
			
		   }  
  tempb=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in b "<<((ff*100)/total_distance)<<endl;

  outdata1<<"total distance covered in arm c"<<" ";
 ff=0.0;
 for (int i=0;i<cntc+1;i++){
			ff+=positionc[i];
			
		   }  
  tempc=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
  outdata1<<"% distance in c "<<((ff*100)/total_distance)<<endl;
  ////////////////////

   outdata1<<"total distance covered in arm d"<<" ";
 ff=0.0;
 for (int i=0;i<cntd+1;i++){
			ff+=positiond[i];
			
		   }  
 

 tempd=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in d "<<((ff*100)/total_distance)<<endl;
 //////////////////////////////////

  outdata1<<"total distance covered in arm e"<<" ";
 ff=0.0;
 for (int i=0;i<cnte+1;i++){
			ff+=positione[i];
			
		   }  
 

 tempe=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in e "<<((ff*100)/total_distance)<<endl;

 /////////////////////////////
  outdata1<<"total distance covered in arm f"<<" ";
 ff=0.0;
 for (int i=0;i<cntf+1;i++){
			ff+=positionf[i];
			
		   }  
 

 tempf=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in f "<<((ff*100)/total_distance)<<endl;
 ///////////////////////////////////
  outdata1<<"total distance covered in arm g"<<" ";
 ff=0.0;
 for (int i=0;i<cntg+1;i++){
			ff+=positiong[i];
			
		   }  
 

 tempg=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in g "<<((ff*100)/total_distance)<<endl;
 /////////////////
  outdata1<<"total distance covered in arm h"<<" ";
 ff=0.0;
 for (int i=0;i<cnth+1;i++){
			ff+=positionh[i];
			
		   }  
 

 temph=ff;
 outdata1<<ff<<"  "<<"pixel"<<endl;
 outdata1<<"% distance in h "<<((ff*100)/total_distance)<<endl;
 //////////////////////////////////////

  outdata1<<"average velocity"<<(double)(veloci/cnveloci)<<endl;
  outdata1<<" total x distance covered "<<total_distance_x<<" pixel"<<endl;
outdata1<<" total y distance covered "<<total_distance_y<<" pixel"<<endl;
//outdata2<<"Total alternation"<<","<<"Wrong alter"<<","<<"%SAS"<<","<<"AAR"<<","<<"AARR"<<","<<"SAR"<<","<<"SARR"<<","<<"TAE"<<","<<"total_VisitA"<<","<<"TimeA"<<","<<"%TimeA"<<","<<"Adist"<<","<<"%Adist"<<","<<"total_VisitB"<<","<<"TimeB"<<","<<"%TimeB"<<","<<"Bdist"<<","<<"%Bdist"<<",""total_VisitC"<<","<<"TimeC"<<","<<"%TimeC"<<","<<"Cdist"<<","<<"%Cdist"<<","<<"Total_dist"<<","<<"Toatal_time"<<","<<"Avg.Velocity"<<","<<"Total_X_axis_distance"<<","<<"Total_Y_axis_distance"<<endl;
//outdata2<<alte2<<","<<(alte3+alte4)<<","<<(alte2*100)/(((cnta+1)+(cntb+1)+(cntc+1))-2)<<","<<alte3<<","<<((alte3*100)/(cnta+cntb+cntc+3))<<","<<alte5<<","<<((alte5*100)/(cnta+cntb+cntc+3))<<","<<(cnta+cntb+cntc+3)<<","<<cnta+1<<","<<raw_totala<<","<<(raw_totala*100)/vg<<","<<tempa<<","<<((tempa*100)/total_distance)<<","<<cntb+1<<","<<raw_totalb<<","<<(raw_totalb*100)/vg<<","<<tempb<<","<<((tempb*100)/total_distance)<<','<<cntc+1<<","<<raw_totalc<<","<<(raw_totalc*100)/vg<<","<<tempc<<","<<((tempc*100)/total_distance)<<","<<total_distance<<","<<vg<<","<<(double)(veloci/cnveloci)<<","<<total_distance_x<<","<<total_distance_y<<endl;
outdata2<<"rat"+numb<<","<<alte2<<","<<(alte3+alte4)<<","<<cntss<<","<<alte3<<","<<cntaa<<","<<alte5<<","<<cntsar<<","<<(cnta+cntb+cntc+3)<<","<<cnta+1<<","<<raw_totala<<","<<(raw_totala*100)/vg<<","<<tempa<<","<<((tempa*100)/total_distance)<<","<<cntb+1<<","<<raw_totalb<<","<<(raw_totalb*100)/vg<<","<<tempb<<","<<((tempb*100)/total_distance)<<','<<cntc+1<<","<<raw_totalc<<","<<(raw_totalc*100)/vg<<","<<tempc<<","<<((tempc*100)/total_distance)<<","<<total_distance<<","<<vg<<","<<(double)(veloci/cnveloci)<<","<<total_distance_x<<","<<total_distance_y<<endl;

number=number++;
ab=1;
numb=to_string(number);
path="ashish"+numb+extension;
path1="ashish"+numb+".txt";
path2="rat_data"+numb+extension;
cout<<"E:/rat/"+path<<endl;
cout<<"notepad path"<<"E:/rat/"<<path1<<endl;
cout<<"Excel path"<<"E:/rat/"<<path2<<endl;

clearValue();
sta=0;
cout<<"outside 4"<<endl;
//system("pause");
setTrackbarPos("SetValues", "originall",sta);  // for real time only it should pe pressed when new rat is to be introduced it will stop the video and you have to start the video
cout<<"outside 5"<<endl;
//system("pause");
goto ash;
}




char d=waitKey(1);
if (d == 'x') // to stop the video 
{
	cout<<"you have pressed stop button"<<endl;
	cl=0;
	setTrackbarPos("Stop/Start", "originall",cl);//cl
}


if (d== 's') //to start the video
{cl=1;
setTrackbarPos("Stop/Start", "originall",cl);//cl
cout<<"you have pressed start button"<<endl;
}








if (d == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
{
cout << "esc key is pressed by user" << endl;
break;
}


}
outdata1.close();
outdata.close();
outdata2.close();
cap.release();
return 0;

}



void compute(Point a[1][4]){
	int temp=0;
	for (int j=0; j<4;j++){
		for (int i=0; i<4;i++){
         if( a[0][j].x<a[0][i].x){
			 temp=a[0][i].x;
			 a[0][i].x=a[0][j].x;
			 a[0][j].x=temp;
		 }

		  if( a[0][j].y<a[0][i].y){
			 temp=a[0][i].y;
			 a[0][i].y=a[0][j].y;
			 a[0][j].y=temp;
		 }
		}}
}


int eval(int qx,int qy,int wx,int wxx,int ey,int eyy){
	
	//int rat_bleft=5;
   //int rat_btop=5;
	if (qx-rat_left> wx && qx+rat_bleft> wx  && qx-rat_left< wxx&& qx+rat_bleft< wxx && qy-rat_top> ey && qy+rat_btop> ey && qy-rat_top< eyy && qy+rat_btop< eyy){
	return 1;
}
else{
	return 0;
	}
}



void alterationCompute(){
	alte2=0;  // this number of sucess alterations
	alte3=0;  // this number of alter arm repeat (i.e. a-b-a)
	alte4=0; // this is nuber of similar arm repeat (i.e. a-b-b)
	alte5=0;

	if(alte>=2){

	for (int i=1;i<alte;i++){
		
	if(alte1[i]!=alte1[i-1] && alte1[i]!=alte1[i+1] && alte1[i-1]!=alte1[i+1]){
	alte2++;//this is sucessful number of alteration
	}

	else if(alte1[i]!=alte1[i-1]&& alte1[i]!=alte1[i+1]&& alte1[i-1]==alte1[i+1]){

		alte3++;  // thsi is alter arm repeat (i.e. a-c-a,c-b-c)
		
	}


	else if(alte1[i]==alte1[i-1]){        

		alte4++;               // this is similar arm repeat (i.e b-b-a)
		
	}
	else if(alte1[i]==alte1[i+1]){
		
		alte4++;             // this is similar arm repeat (i.e a-b-b)
		alte5++; 
		
	}
	




	}
	
	}
	
outdata1<<"Total alternation"<<"  "<<alte2<<endl;
}





void clearValue(){
ashish=0;   // this is used for restarting the timer when ashish ==1 timer resets and ther is ashish++ so i have putted ashish=0 so that when it goes to ab==1 ashish++ happens and ashish==1 executes
clearLine=1;
//imgLines = Mat::zeros( imgTmp.size(), CV_8UC3 );  // clearing the lines
 //resetting distance in a b and c indivdual
 for (int i=0;i<cnta+1;i++){
	 positiona[i]=0;
 }
  for (int i=0;i<cntb+1;i++){
	   positionb[i]=0;
 }
   for (int i=0;i<cntc+1;i++){
	    positionc[i]=0;
 }///
    for (int i=0;i<cntd+1;i++){
	 positiond[i]=0;
 }
  for (int i=0;i<cnte+1;i++){
	   positione[i]=0;
 }
   for (int i=0;i<cntf+1;i++){
	    positionf[i]=0;
 }//

    for (int i=0;i<cntg+1;i++){
	    positiong[i]=0;
 }//

	 for (int i=0;i<cnth+1;i++){
	    positionh[i]=0;
 }//

for (int i=0;i<8;i++){
foodarm[i]=0;
}




 //
loc=0;  // this alteraton prints position
raw_totala=0; // these makes total each arm time zero;
raw_totalb=0; 
raw_totalc=0; 
raw_totald=0; // these makes total each arm time zero;
raw_totale=0; 
raw_totalf=0; 
raw_totalg=0; // these makes total each arm time zero;
raw_totalh=0; 





cnta=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cntb=-1;
cntc=-1;

cntd=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cnte=-1;
cntf=-1;

cntg=-1;   //  these cnts will be utilized as a index position of pointa,pointb ,pointc arrays as ratwill move in the region that corresponding cnt will get get increased and at that place the time will be stored for that session and if i want total tme for that region u just have to sum up the array upto the last cnta value becasue the remaining will be empty
cnth=-1;

alte=-1;  //for alteration function increment value
vicss=-1;
alte2=0;
alte3=0;
alte4=0;
alte5=0;
as=1;
bs=1;
cs=1;
ds=1;
es=1;
fs=1;
gs=1;
hs=1;
seal=1;

 dist=0.0;
 distx=0.0;
total_distance=0;
	total_distance_x=0;
	total_distance_y=0;
	 total_distance=0.0;
total_distance_x=0.0;
total_distance_y=0.0;
veloci=0.0;
cnveloci=0;

outdata1.close();
outdata1.open("E:/rat/"+path1);

}


float equation(int x,int y,int x1,int x2,int y1, int y2,int eva){
float m=(float)((y2-y1)/(x2-x1));
if( (y-y1-(m*x)+(m*x1))>0 && eva==1){
	
	return 1;

}
if( (y-y1-(m*x)+(m*x1))<0 && eva==2){
	
	return 1;
}

return 0;
}

int octang(int x,int y){
	if(equation(x,y,rats[1].x,rats[8].x,rats[1].y,rats[8].y,1) &&
	   equation(x,y,rats[7].x,rats[6].x,rats[7].y,rats[6].y,2) &&
	   equation(x,y,rats[2].x,rats[3].x,rats[2].y,rats[3].y,1) &&  
	   equation(x,y,rats[4].x,rats[5].x,rats[4].y,rats[5].y,2) &&
	//   ((x>rats[8].x && x<rats[3].x) && (y>rats[1].y && y<rats[6].y)))
	   ((x-rat_bleft>rats[8].x && x-rat_bleft<rats[3].x) && (y-rat_btop>rats[1].y && y-rat_btop<rats[6].y)))
	{   //cout<<"guess what"<<endl;
		   return 1;
	}

	else {
		return 0;
	}
	
}



void foodarmcheck(String r){
	if(r=="A"){
	foodarm[0]=1;}
	if(r=="B"){
	foodarm[1]=1;}
	if(r=="C"){
	foodarm[2]=1;}
	if(r=="D"){
	foodarm[3]=1;}
	if(r=="E"){
	foodarm[4]=1;}
	if(r=="F"){
	foodarm[5]=1;}
	if(r=="G"){
	foodarm[6]=1;}
	if(r=="H"){
	foodarm[7]=1;}

}


/*void calculateTime(){
	 totalCorrectTime=0.0;
		  if (foodarm[0]==1){
		  totalCorrectTime+=raw_totala;
		  }
		  if (foodarm[1]==1){
		   totalCorrectTime+=raw_totalb;}
		  if (foodarm[2]==1){
		   totalCorrectTime+=raw_totalc;}
		  if (foodarm[3]==1){
		   totalCorrectTime+=raw_totald;}
		  if (foodarm[4]==1){
		   totalCorrectTime+=raw_totale;}
		  if (foodarm[5]==1){
		   totalCorrectTime+=raw_totalf;}
		  if (foodarm[6]==1){
		   totalCorrectTime+=raw_totalg;}
		  if (foodarm[7]==1){
		   totalCorrectTime+=raw_totalh;}
		 
	
			//raw_totalh
}*/