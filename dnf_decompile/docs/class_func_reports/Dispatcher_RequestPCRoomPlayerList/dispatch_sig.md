# dispatch_sig

`_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestPCRoomPlayerList` | `0x0821d7fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d7fa  _ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d7fa, 0x0821d8cf]
0821d7fa +0x00:  push   %ebp
0821d7fb +0x01:  mov    %esp,%ebp
0821d7fd +0x03:  push   %esi
0821d7fe +0x04:  push   %ebx
0821d7ff +0x05:  sub    $0x20,%esp
0821d802 +0x08:  mov    0xc(%ebp),%eax
0821d805 +0x0b:  mov    %eax,(%esp)
0821d808 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d80d +0x13:  cmp    $0x2,%eax
0821d810 +0x16:  jle    0821d821 <+0x27>
0821d812 +0x18:  mov    0xc(%ebp),%eax
0821d815 +0x1b:  mov    %eax,(%esp)
0821d818 +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821d81d +0x23:  test   %eax,%eax
0821d81f +0x25:  jne    0821d828 <+0x2e>
0821d821 +0x27:  mov    $0x1,%eax
0821d826 +0x2c:  jmp    0821d82d <+0x33>
0821d828 +0x2e:  mov    $0x0,%eax
0821d82d +0x33:  test   %al,%al
0821d82f +0x35:  je     0821d8c3 <+0xc9>
0821d835 +0x3b:  mov    0xc(%ebp),%eax
0821d838 +0x3e:  mov    %eax,(%esp)
0821d83b +0x41:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821d840 +0x46:  movl   $0x0,0x4(%esp)
0821d848 +0x4e:  mov    %eax,(%esp)
0821d84b +0x51:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821d850 +0x56:  mov    %eax,%ebx
0821d852 +0x58:  mov    0xc(%ebp),%eax
0821d855 +0x5b:  mov    %eax,(%esp)
0821d858 +0x5e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d85d +0x63:  mov    %eax,%esi
0821d85f +0x65:  movl   $0x5,0xc(%esp)
0821d867 +0x6d:  movl   $0xd14e,0x8(%esp)
0821d86f +0x75:  movl   $&_ZZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d877 +0x7d:  lea    -0x18(%ebp),%eax
0821d87a +0x80:  mov    %eax,(%esp)
0821d87d +0x83:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821d882 +0x88:  mov    %ebx,0xc(%esp)
0821d886 +0x8c:  mov    %esi,0x8(%esp)
0821d88a +0x90:  movl   $"PCROOM : Dispatcher_RequestPCRoomPlayerList => User State : %d, m_id : %s",0x4(%esp)
0821d892 +0x98:  lea    -0x18(%ebp),%eax
0821d895 +0x9b:  mov    %eax,(%esp)
0821d898 +0x9e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821d89d +0xa3:  movl   $0x0,0xc(%esp)
0821d8a5 +0xab:  movl   $0x0,0x8(%esp)
0821d8ad +0xb3:  movl   $&_ZZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d8b5 +0xbb:  movl   $0xd14f,(%esp)
0821d8bc +0xc2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d8c1 +0xc7:  jmp    0821d8c8 <+0xce>
0821d8c3 +0xc9:  mov    $0x0,%eax
0821d8c8 +0xce:  add    $0x20,%esp
0821d8cb +0xd1:  pop    %ebx
0821d8cc +0xd2:  pop    %esi
0821d8cd +0xd3:  pop    %ebp
0821d8ce +0xd4:  ret
0821d8cf +0xd5:  nop
```

## 反编译 C

```c
// Dispatcher_RequestPCRoomPlayerList::dispatch_sig @ 0x821d7fa

/* Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

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
      goto LAB_0821d82d;
    }
  }
  bVar1 = true;
LAB_0821d82d:
  if (bVar1) {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state((CUser *)param_2);
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd14e,5);
    cMyTrace::operator()
              (local_1c,"PCROOM : Dispatcher_RequestPCRoomPlayerList => User State : %d, m_id : %s",
               uVar5,uVar4);
    uVar4 = LineFunc(0xd14f,
                     "virtual int Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
