//소켓의 주소 할당 및 연결 
// 전화기에 전화번호가 부여되듯이 소켓에도 주소정보가 할당 된다.
// 소켓의 주소정보는 IP 와 PORT 번호로 구성이 된다.
#include <sys/socket.h>
int bind (int sockfd, struct sockaddr *myaddr, socklen_t addrlen);
// 성공시 0 , 실패시 -1 반환 
