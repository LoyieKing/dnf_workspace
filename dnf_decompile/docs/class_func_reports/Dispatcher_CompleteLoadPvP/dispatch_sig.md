# dispatch_sig

`_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompleteLoadPvP` | `0x082252fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082252fe  _ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&)
# range [0x082252fe, 0x08225393]
082252fe +0x00:  push   %ebp
082252ff +0x01:  mov    %esp,%ebp
08225301 +0x03:  sub    $0x28,%esp
08225304 +0x06:  mov    0xc(%ebp),%eax
08225307 +0x09:  mov    %eax,(%esp)
0822530a +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822530f +0x11:  cmp    $0x1,%eax
08225312 +0x14:  setle  %al
08225315 +0x17:  test   %al,%al
08225317 +0x19:  je     0822533f <+0x41>
08225319 +0x1b:  movl   $0x0,0xc(%esp)
08225321 +0x23:  movl   $0x0,0x8(%esp)
08225329 +0x2b:  movl   $&_ZZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08225331 +0x33:  movl   $0xe005,(%esp)
08225338 +0x3a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822533d +0x3f:  jmp    08225391 <+0x93>
0822533f +0x41:  mov    0xc(%ebp),%eax
08225342 +0x44:  mov    %eax,(%esp)
08225345 +0x47:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0822534a +0x4c:  mov    %eax,-0xc(%ebp)
0822534d +0x4f:  cmpl   $0x0,-0xc(%ebp)
08225351 +0x53:  je     0822538c <+0x8e>
08225353 +0x55:  mov    -0xc(%ebp),%eax
08225356 +0x58:  mov    0x6e4(%eax),%eax
0822535c +0x5e:  test   %eax,%eax
0822535e +0x60:  je     0822538c <+0x8e>
08225360 +0x62:  mov    -0xc(%ebp),%eax
08225363 +0x65:  mov    0x6e4(%eax),%eax
08225369 +0x6b:  mov    (%eax),%eax
0822536b +0x6d:  add    $0x54,%eax
0822536e +0x70:  mov    (%eax),%ecx
08225370 +0x72:  mov    -0xc(%ebp),%eax
08225373 +0x75:  mov    0x6e4(%eax),%eax
08225379 +0x7b:  mov    0xc(%ebp),%edx
0822537c +0x7e:  mov    %edx,0x4(%esp)
08225380 +0x82:  mov    %eax,(%esp)
08225383 +0x85:  call   *%ecx
08225385 +0x87:  mov    $0x0,%eax
0822538a +0x8c:  jmp    08225391 <+0x93>
0822538c +0x8e:  mov    $0x0,%eax
08225391 +0x93:  leave
08225392 +0x94:  ret
08225393 +0x95:  nop
```

## 反编译 C

```c
// Dispatcher_CompleteLoadPvP::dispatch_sig @ 0x82252fe

/* Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadPvP::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 < 2) {
    uVar2 = LineFunc(0xe005,
                     "virtual int Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    iVar1 = CUser::GetPVPRoom((CUser *)param_2);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x6e4) == 0)) {
      uVar2 = 0;
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x6e4) + 0x54))(*(undefined4 *)(iVar1 + 0x6e4),param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
