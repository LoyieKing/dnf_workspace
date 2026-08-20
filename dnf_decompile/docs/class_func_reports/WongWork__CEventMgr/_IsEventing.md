# _IsEventing

`_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE`

`WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848ef0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848ef0c  _ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE
#           WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)
# range [0x0848ef0c, 0x0848eff7]
0848ef0c +0x00:  push   %ebp
0848ef0d +0x01:  mov    %esp,%ebp
0848ef0f +0x03:  sub    $0xa8,%esp
0848ef15 +0x09:  movl   $0x2c,0x8(%esp)
0848ef1d +0x11:  movl   $0x0,0x4(%esp)
0848ef25 +0x19:  lea    -0x3c(%ebp),%eax
0848ef28 +0x1c:  mov    %eax,(%esp)
0848ef2b +0x1f:  call   0807dcc0 <_init+0x5b8>
0848ef30 +0x24:  movl   $0x2c,0x8(%esp)
0848ef38 +0x2c:  movl   $0x0,0x4(%esp)
0848ef40 +0x34:  lea    -0x68(%ebp),%eax
0848ef43 +0x37:  mov    %eax,(%esp)
0848ef46 +0x3a:  call   0807dcc0 <_init+0x5b8>
0848ef4b +0x3f:  mov    0x8(%ebp),%eax
0848ef4e +0x42:  sub    $0x76c,%eax
0848ef53 +0x47:  mov    %eax,-0x54(%ebp)
0848ef56 +0x4a:  mov    0xc(%ebp),%eax
0848ef59 +0x4d:  sub    $0x1,%eax
0848ef5c +0x50:  mov    %eax,-0x58(%ebp)
0848ef5f +0x53:  mov    0x10(%ebp),%eax
0848ef62 +0x56:  mov    %eax,-0x5c(%ebp)
0848ef65 +0x59:  mov    0x14(%ebp),%eax
0848ef68 +0x5c:  mov    %eax,-0x60(%ebp)
0848ef6b +0x5f:  mov    0x18(%ebp),%eax
0848ef6e +0x62:  sub    $0x76c,%eax
0848ef73 +0x67:  mov    %eax,-0x28(%ebp)
0848ef76 +0x6a:  mov    0x1c(%ebp),%eax
0848ef79 +0x6d:  sub    $0x1,%eax
0848ef7c +0x70:  mov    %eax,-0x2c(%ebp)
0848ef7f +0x73:  mov    0x20(%ebp),%eax
0848ef82 +0x76:  mov    %eax,-0x30(%ebp)
0848ef85 +0x79:  mov    0x24(%ebp),%eax
0848ef88 +0x7c:  mov    %eax,-0x34(%ebp)
0848ef8b +0x7f:  lea    -0x3c(%ebp),%eax
0848ef8e +0x82:  mov    %eax,0x4(%esp)
0848ef92 +0x86:  lea    -0x68(%ebp),%eax
0848ef95 +0x89:  mov    %eax,(%esp)
0848ef98 +0x8c:  call   086b1d86 <_Z7in_timeP2tmS0_>  ; in_time(tm*, tm*)
0848ef9d +0x91:  test   %al,%al
0848ef9f +0x93:  je     0848eff1 <+0xe5>
0848efa1 +0x95:  cmpl   $0x1,0x28(%ebp)
0848efa5 +0x99:  jne    0848efea <+0xde>
0848efa7 +0x9b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0848efae +0xa2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0848efb3 +0xa7:  mov    %eax,-0x10(%ebp)
0848efb6 +0xaa:  lea    -0x94(%ebp),%eax
0848efbc +0xb0:  mov    %eax,0x4(%esp)
0848efc0 +0xb4:  lea    -0x10(%ebp),%eax
0848efc3 +0xb7:  mov    %eax,(%esp)
0848efc6 +0xba:  call   0807e360 <_init+0xc58>
0848efcb +0xbf:  mov    %eax,-0xc(%ebp)
0848efce +0xc2:  mov    -0xc(%ebp),%eax
0848efd1 +0xc5:  mov    0x18(%eax),%eax
0848efd4 +0xc8:  test   %eax,%eax
0848efd6 +0xca:  je     0848efe3 <+0xd7>
0848efd8 +0xcc:  mov    -0xc(%ebp),%eax
0848efdb +0xcf:  mov    0x18(%eax),%eax
0848efde +0xd2:  cmp    $0x6,%eax
0848efe1 +0xd5:  jne    0848eff1 <+0xe5>
0848efe3 +0xd7:  mov    $0x1,%eax
0848efe8 +0xdc:  jmp    0848eff6 <+0xea>
0848efea +0xde:  mov    $0x1,%eax
0848efef +0xe3:  jmp    0848eff6 <+0xea>
0848eff1 +0xe5:  mov    $0x0,%eax
0848eff6 +0xea:  leave
0848eff7 +0xeb:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::_IsEventing @ 0x848ef0c

/* WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int,
   WongWork::CEventMgr::EVENT_TYPE) */

undefined4
WongWork::CEventMgr::_IsEventing
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
          int param_8,int param_9)

{
  char cVar1;
  tm *ptVar2;
  tm local_98;
  tm local_6c;
  tm local_40;
  time_t local_14 [4];
  
  memset(&local_40,0,0x2c);
  memset(&local_6c,0,0x2c);
  local_6c.tm_year = param_1 + -0x76c;
  local_6c.tm_mon = param_2 + -1;
  local_6c.tm_mday = param_3;
  local_6c.tm_hour = param_4;
  local_40.tm_year = param_5 + -0x76c;
  local_40.tm_mon = param_6 + -1;
  local_40.tm_mday = param_7;
  local_40.tm_hour = param_8;
  cVar1 = in_time(&local_6c,&local_40);
  if (cVar1 != '\0') {
    if (param_9 != 1) {
      return 1;
    }
    local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    ptVar2 = localtime_r(local_14,&local_98);
    if ((ptVar2->tm_wday == 0) || (ptVar2->tm_wday == 6)) {
      return 1;
    }
  }
  return 0;
}
```
