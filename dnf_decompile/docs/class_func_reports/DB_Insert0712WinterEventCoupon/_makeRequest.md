# _makeRequest

`_ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj`

`DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Insert0712WinterEventCoupon` | `0x0842e6e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e6e0  _ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj
#           DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int, unsigned int)
# range [0x0842e6e0, 0x0842e7bd]
0842e6e0 +0x00:  push   %ebp
0842e6e1 +0x01:  mov    %esp,%ebp
0842e6e3 +0x03:  push   %esi
0842e6e4 +0x04:  push   %ebx
0842e6e5 +0x05:  sub    $0x20,%esp
0842e6e8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842e6ed +0x0d:  movl   $0x7331,0x8(%esp)
0842e6f5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842e6fd +0x1d:  mov    %eax,(%esp)
0842e700 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842e705 +0x25:  movl   $0x0,0x8(%esp)
0842e70d +0x2d:  mov    %eax,0x4(%esp)
0842e711 +0x31:  lea    -0x14(%ebp),%eax
0842e714 +0x34:  mov    %eax,(%esp)
0842e717 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842e71c +0x3c:  mov    0x8(%ebp),%ebx
0842e71f +0x3f:  lea    -0x14(%ebp),%eax
0842e722 +0x42:  mov    %eax,(%esp)
0842e725 +0x45:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e72a +0x4a:  mov    %ebx,0x4(%esp)
0842e72e +0x4e:  mov    %eax,(%esp)
0842e731 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e736 +0x56:  lea    -0x14(%ebp),%eax
0842e739 +0x59:  mov    %eax,(%esp)
0842e73c +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e741 +0x61:  movl   $0xffffffff,0x4(%esp)
0842e749 +0x69:  mov    %eax,(%esp)
0842e74c +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e751 +0x71:  lea    -0x14(%ebp),%eax
0842e754 +0x74:  mov    %eax,(%esp)
0842e757 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842e75c +0x7c:  mov    %eax,(%esp)
0842e75f +0x7f:  call   0845291a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5530>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5530
0842e764 +0x84:  mov    %eax,-0xc(%ebp)
0842e767 +0x87:  mov    -0xc(%ebp),%eax
0842e76a +0x8a:  mov    0xc(%ebp),%edx
0842e76d +0x8d:  mov    %edx,(%eax)
0842e76f +0x8f:  mov    -0xc(%ebp),%eax
0842e772 +0x92:  mov    0x10(%ebp),%edx
0842e775 +0x95:  mov    %edx,0x4(%eax)
0842e778 +0x98:  mov    -0xc(%ebp),%eax
0842e77b +0x9b:  mov    0x14(%ebp),%edx
0842e77e +0x9e:  mov    %edx,0x8(%eax)
0842e781 +0xa1:  lea    -0x14(%ebp),%eax
0842e784 +0xa4:  mov    %eax,(%esp)
0842e787 +0xa7:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0842e78c +0xac:  mov    %eax,%ebx
0842e78e +0xae:  lea    -0x14(%ebp),%eax
0842e791 +0xb1:  mov    %eax,(%esp)
0842e794 +0xb4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e799 +0xb9:  mov    %ebx,%eax
0842e79b +0xbb:  add    $0x20,%esp
0842e79e +0xbe:  pop    %ebx
0842e79f +0xbf:  pop    %esi
0842e7a0 +0xc0:  pop    %ebp
0842e7a1 +0xc1:  ret
0842e7a2 +0xc2:  mov    %edx,%ebx
0842e7a4 +0xc4:  mov    %eax,%esi
0842e7a6 +0xc6:  lea    -0x14(%ebp),%eax
0842e7a9 +0xc9:  mov    %eax,(%esp)
0842e7ac +0xcc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e7b1 +0xd1:  mov    %esi,%eax
0842e7b3 +0xd3:  mov    %ebx,%edx
0842e7b5 +0xd5:  mov    %eax,(%esp)
0842e7b8 +0xd8:  call   08ae3750 <_Unwind_Resume>
0842e7bd +0xdd:  nop
```

## 反编译 C

```c
// DB_Insert0712WinterEventCoupon::_makeRequest @ 0x842e6e0

/* DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int,
   unsigned int) */

undefined4
DB_Insert0712WinterEventCoupon::_makeRequest
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_18 [8];
  SIG_INSERT_0712_WINTER_EVENT_COUPON *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7331);
  CStreamGuard::CStreamGuard(local_18,pSVar1,false);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e731 to 0842e763 has its CatchHandler @ 0842e7a2 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_0712_WINTER_EVENT_COUPON>(pCVar2);
  *(undefined4 *)local_10 = param_2;
  *(undefined4 *)(local_10 + 4) = param_3;
  *(undefined4 *)(local_10 + 8) = param_4;
  uVar3 = CStreamGuard::Get(local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return uVar3;
}
```
