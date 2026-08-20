# dispatch_sig

`_ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AskRematch` | `0x08227862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08227862  _ZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&)
# range [0x08227862, 0x0822793b]
08227862 +0x00:  push   %ebp
08227863 +0x01:  mov    %esp,%ebp
08227865 +0x03:  sub    $0x28,%esp
08227868 +0x06:  mov    0xc(%ebp),%eax
0822786b +0x09:  mov    %eax,(%esp)
0822786e +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08227873 +0x11:  cmp    $0x2,%eax
08227876 +0x14:  jle    08227887 <+0x25>
08227878 +0x16:  mov    0xc(%ebp),%eax
0822787b +0x19:  mov    %eax,(%esp)
0822787e +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08227883 +0x21:  test   %eax,%eax
08227885 +0x23:  jne    0822788e <+0x2c>
08227887 +0x25:  mov    $0x1,%eax
0822788c +0x2a:  jmp    08227893 <+0x31>
0822788e +0x2c:  mov    $0x0,%eax
08227893 +0x31:  test   %al,%al
08227895 +0x33:  je     082278a1 <+0x3f>
08227897 +0x35:  mov    $0x0,%eax
0822789c +0x3a:  jmp    0822793a <+0xd8>
082278a1 +0x3f:  movb   $0x0,-0xd(%ebp)
082278a5 +0x43:  lea    -0xd(%ebp),%eax
082278a8 +0x46:  mov    %eax,0x4(%esp)
082278ac +0x4a:  mov    0x10(%ebp),%eax
082278af +0x4d:  mov    %eax,(%esp)
082278b2 +0x50:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082278b7 +0x55:  xor    $0x1,%eax
082278ba +0x58:  test   %al,%al
082278bc +0x5a:  je     082278e4 <+0x82>
082278be +0x5c:  movl   $0x0,0xc(%esp)
082278c6 +0x64:  movl   $0x0,0x8(%esp)
082278ce +0x6c:  movl   $&_ZZN21Dispatcher_AskRematch12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082278d6 +0x74:  movl   $0xe3af,(%esp)
082278dd +0x7b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082278e2 +0x80:  jmp    0822793a <+0xd8>
082278e4 +0x82:  mov    0xc(%ebp),%eax
082278e7 +0x85:  mov    %eax,(%esp)
082278ea +0x88:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
082278ef +0x8d:  mov    %eax,-0xc(%ebp)
082278f2 +0x90:  cmpl   $0x0,-0xc(%ebp)
082278f6 +0x94:  je     08227935 <+0xd3>
082278f8 +0x96:  mov    -0xc(%ebp),%eax
082278fb +0x99:  mov    0x6e4(%eax),%eax
08227901 +0x9f:  test   %eax,%eax
08227903 +0xa1:  je     08227935 <+0xd3>
08227905 +0xa3:  mov    -0xc(%ebp),%eax
08227908 +0xa6:  mov    0x6e4(%eax),%eax
0822790e +0xac:  mov    (%eax),%eax
08227910 +0xae:  add    $0x68,%eax
08227913 +0xb1:  mov    (%eax),%ecx
08227915 +0xb3:  movzbl -0xd(%ebp),%eax
08227919 +0xb7:  movsbl %al,%edx
0822791c +0xba:  mov    -0xc(%ebp),%eax
0822791f +0xbd:  mov    0x6e4(%eax),%eax
08227925 +0xc3:  mov    %edx,0x8(%esp)
08227929 +0xc7:  mov    0xc(%ebp),%edx
0822792c +0xca:  mov    %edx,0x4(%esp)
08227930 +0xce:  mov    %eax,(%esp)
08227933 +0xd1:  call   *%ecx
08227935 +0xd3:  mov    $0x0,%eax
0822793a +0xd8:  leave
0822793b +0xd9:  ret
```

## 反编译 C

```c
// Dispatcher_AskRematch::dispatch_sig @ 0x8227862

/* Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AskRematch::dispatch_sig(Dispatcher_AskRematch *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08227893;
    }
  }
  bVar1 = true;
LAB_08227893:
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    local_11 = '\0';
    cVar2 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar2 == '\x01') {
      local_10 = CUser::GetPVPRoom(param_1);
      if ((local_10 != 0) && (*(int *)(local_10 + 0x6e4) != 0)) {
        (**(code **)(**(int **)(local_10 + 0x6e4) + 0x68))
                  (*(undefined4 *)(local_10 + 0x6e4),param_1,(int)local_11);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = LineFunc(0xe3af,"virtual int Dispatcher_AskRematch::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar4;
}
```
