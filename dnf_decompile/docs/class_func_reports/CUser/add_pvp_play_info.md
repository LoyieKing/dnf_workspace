# add_pvp_play_info

`_ZN5CUser17add_pvp_play_infoEjj`

`CUser::add_pvp_play_info(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865d986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865d986  _ZN5CUser17add_pvp_play_infoEjj
#           CUser::add_pvp_play_info(unsigned int, unsigned int)
# range [0x0865d986, 0x0865da4d]
0865d986 +0x00:  push   %ebp
0865d987 +0x01:  mov    %esp,%ebp
0865d989 +0x03:  push   %ebx
0865d98a +0x04:  sub    $0x54,%esp
0865d98d +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0865d994 +0x0e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865d999 +0x13:  mov    %eax,-0x10(%ebp)
0865d99c +0x16:  mov    0x8(%ebp),%eax
0865d99f +0x19:  mov    %eax,(%esp)
0865d9a2 +0x1c:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865d9a7 +0x21:  mov    0x68(%eax),%eax
0865d9aa +0x24:  lea    &_ZL14gUnicodeBuffer+0xac54(%eax),%edx
0865d9b0 +0x2a:  mov    -0x10(%ebp),%eax
0865d9b3 +0x2d:  cmp    %eax,%edx
0865d9b5 +0x2f:  setl   %al
0865d9b8 +0x32:  test   %al,%al
0865d9ba +0x34:  je     0865da20 <+0x9a>
0865d9bc +0x36:  mov    0x8(%ebp),%eax
0865d9bf +0x39:  mov    %eax,(%esp)
0865d9c2 +0x3c:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865d9c7 +0x41:  movl   $0x0,0x60(%eax)
0865d9ce +0x48:  lea    -0x3c(%ebp),%eax
0865d9d1 +0x4b:  mov    %eax,0x4(%esp)
0865d9d5 +0x4f:  lea    -0x10(%ebp),%eax
0865d9d8 +0x52:  mov    %eax,(%esp)
0865d9db +0x55:  call   0807e360 <_init+0xc58>
0865d9e0 +0x5a:  mov    %eax,-0xc(%ebp)
0865d9e3 +0x5d:  mov    -0xc(%ebp),%eax
0865d9e6 +0x60:  movl   $0x0,0x8(%eax)
0865d9ed +0x67:  mov    -0xc(%ebp),%eax
0865d9f0 +0x6a:  movl   $0x0,0x4(%eax)
0865d9f7 +0x71:  mov    -0xc(%ebp),%eax
0865d9fa +0x74:  movl   $0x0,(%eax)
0865da00 +0x7a:  mov    0x8(%ebp),%eax
0865da03 +0x7d:  mov    %eax,(%esp)
0865da06 +0x80:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865da0b +0x85:  mov    %eax,%ebx
0865da0d +0x87:  mov    -0xc(%ebp),%eax
0865da10 +0x8a:  mov    %eax,(%esp)
0865da13 +0x8d:  call   0807e820 <_init+0x1118>
0865da18 +0x92:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
0865da1d +0x97:  mov    %eax,0x68(%ebx)
0865da20 +0x9a:  mov    0x8(%ebp),%eax
0865da23 +0x9d:  mov    %eax,(%esp)
0865da26 +0xa0:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865da2b +0xa5:  mov    0x60(%eax),%edx
0865da2e +0xa8:  add    0xc(%ebp),%edx
0865da31 +0xab:  mov    %edx,0x60(%eax)
0865da34 +0xae:  mov    0x8(%ebp),%eax
0865da37 +0xb1:  mov    %eax,(%esp)
0865da3a +0xb4:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865da3f +0xb9:  mov    0x64(%eax),%edx
0865da42 +0xbc:  add    0x10(%ebp),%edx
0865da45 +0xbf:  mov    %edx,0x64(%eax)
0865da48 +0xc2:  add    $0x54,%esp
0865da4b +0xc5:  pop    %ebx
0865da4c +0xc6:  pop    %ebp
0865da4d +0xc7:  ret
```

## 反编译 C

```c
// CUser::add_pvp_play_info @ 0x865d986

/* CUser::add_pvp_play_info(unsigned int, unsigned int) */

void __thiscall CUser::add_pvp_play_info(CUser *this,uint param_1,uint param_2)

{
  int iVar1;
  time_t tVar2;
  tm local_40;
  int local_14;
  tm *local_10;
  
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar1 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  if (*(int *)(iVar1 + 0x68) + 0x15180 < local_14) {
    iVar1 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    local_10 = localtime_r(&local_14,&local_40);
    local_10->tm_hour = 0;
    local_10->tm_min = 0;
    local_10->tm_sec = 0;
    iVar1 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
    tVar2 = mktime(local_10);
    *(time_t *)(iVar1 + 0x68) = tVar2 + 0x15180;
  }
  iVar1 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
  *(uint *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + param_1;
  iVar1 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
  *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + param_2;
  return;
}
```
