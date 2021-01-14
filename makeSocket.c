//TCP 소켓은 전화기에 비유될 수 있다.
//소켓은 socket 함수의 호출을 통해서 생성한다.
// 단 , 전화를 거는 용도의 소켓과 전화를 수신 하는 용도의 소켓 생성 방법에는 차이가 있다.

#include <sys/socket.h>
int socket (int domain, int type , int protocol);
// 성공 시 파일 디스크립터 , 실패시 -1 

// 소켓의 생성 -- 전화기 구매 
