# dispatch_sig

`_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestPCRoomPlayerCount` | `0x0821d8d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d8d0  _ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d8d0, 0x0821d9a5]
0821d8d0 +0x00:  push   %ebp
0821d8d1 +0x01:  mov    %esp,%ebp
0821d8d3 +0x03:  push   %esi
0821d8d4 +0x04:  push   %ebx
0821d8d5 +0x05:  sub    $0x20,%esp
0821d8d8 +0x08:  mov    0xc(%ebp),%eax
0821d8db +0x0b:  mov    %eax,(%esp)
0821d8de +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d8e3 +0x13:  cmp    $0x2,%eax
0821d8e6 +0x16:  jle    0821d8f7 <+0x27>
0821d8e8 +0x18:  mov    0xc(%ebp),%eax
0821d8eb +0x1b:  mov    %eax,(%esp)
0821d8ee +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821d8f3 +0x23:  test   %eax,%eax
0821d8f5 +0x25:  jne    0821d8fe <+0x2e>
0821d8f7 +0x27:  mov    $0x1,%eax
0821d8fc +0x2c:  jmp    0821d903 <+0x33>
0821d8fe +0x2e:  mov    $0x0,%eax
0821d903 +0x33:  test   %al,%al
0821d905 +0x35:  je     0821d999 <+0xc9>
0821d90b +0x3b:  mov    0xc(%ebp),%eax
0821d90e +0x3e:  mov    %eax,(%esp)
0821d911 +0x41:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821d916 +0x46:  movl   $0x0,0x4(%esp)
0821d91e +0x4e:  mov    %eax,(%esp)
0821d921 +0x51:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821d926 +0x56:  mov    %eax,%ebx
0821d928 +0x58:  mov    0xc(%ebp),%eax
0821d92b +0x5b:  mov    %eax,(%esp)
0821d92e +0x5e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d933 +0x63:  mov    %eax,%esi
0821d935 +0x65:  movl   $0x5,0xc(%esp)
0821d93d +0x6d:  movl   $0xd186,0x8(%esp)
0821d945 +0x75:  movl   $&_ZZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d94d +0x7d:  lea    -0x18(%ebp),%eax
0821d950 +0x80:  mov    %eax,(%esp)
0821d953 +0x83:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821d958 +0x88:  mov    %ebx,0xc(%esp)
0821d95c +0x8c:  mov    %esi,0x8(%esp)
0821d960 +0x90:  movl   $"PCROOM : Dispatcher_RequestPCRoomPlayerCount => User State : %d, m_id : %s",0x4(%esp)
0821d968 +0x98:  lea    -0x18(%ebp),%eax
0821d96b +0x9b:  mov    %eax,(%esp)
0821d96e +0x9e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821d973 +0xa3:  movl   $0x0,0xc(%esp)
0821d97b +0xab:  movl   $0x0,0x8(%esp)
0821d983 +0xb3:  movl   $&_ZZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d98b +0xbb:  movl   $0xd187,(%esp)
0821d992 +0xc2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d997 +0xc7:  jmp    0821d99e <+0xce>
0821d999 +0xc9:  mov    $0x0,%eax
0821d99e +0xce:  add    $0x20,%esp
0821d9a1 +0xd1:  pop    %ebx
0821d9a2 +0xd2:  pop    %esi
0821d9a3 +0xd3:  pop    %ebp
0821d9a4 +0xd4:  ret
0821d9a5 +0xd5:  nop
```

## 反编译 C

```c
// Dispatcher_RequestPCRoomPlayerCount::dispatch_sig @ 0x821d8d0

/* Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_1c [16];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821d903;
    }
  }
  bVar1 = true;
LAB_0821d903:
  if (bVar1) {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state((CUser *)param_2);
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd186,5);
    cMyTrace::operator()
              (local_1c,"PCROOM : Dispatcher_RequestPCRoomPlayerCount => User State : %d, m_id : %s"
               ,uVar5,uVar4);
    uVar4 = LineFunc(0xd187,
                     "virtual int Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
