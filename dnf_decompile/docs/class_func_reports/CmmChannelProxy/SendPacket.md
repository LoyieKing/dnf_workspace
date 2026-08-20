# SendPacket

`_ZN15CmmChannelProxy10SendPacketEPci`

`CmmChannelProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x0810637c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810637c  _ZN15CmmChannelProxy10SendPacketEPci
#           CmmChannelProxy::SendPacket(char*, int)
# range [0x0810637c, 0x0810645b]
0810637c +0x00:  push   %ebp
0810637d +0x01:  mov    %esp,%ebp
0810637f +0x03:  push   %edi
08106380 +0x04:  push   %esi
08106381 +0x05:  push   %ebx
08106382 +0x06:  sub    $0x4c,%esp
08106385 +0x09:  mov    0x10(%ebp),%edx
08106388 +0x0c:  mov    0x8(%ebp),%eax
0810638b +0x0f:  mov    0x18(%eax),%eax
0810638e +0x12:  mov    %edx,0x8(%esp)
08106392 +0x16:  mov    0xc(%ebp),%edx
08106395 +0x19:  mov    %edx,0x4(%esp)
08106399 +0x1d:  mov    %eax,(%esp)
0810639c +0x20:  call   0807e830 <_init+0x1128>
081063a1 +0x25:  mov    %eax,-0x1c(%ebp)
081063a4 +0x28:  cmpl   $0x0,-0x1c(%ebp)
081063a8 +0x2c:  setle  %al
081063ab +0x2f:  test   %al,%al
081063ad +0x31:  je     08106450 <+0xd4>
081063b3 +0x37:  call   0807dd70 <_init+0x668>
081063b8 +0x3c:  mov    (%eax),%eax
081063ba +0x3e:  cmp    $0xb,%eax
081063bd +0x41:  je     081063e2 <+0x66>
081063bf +0x43:  call   0807dd70 <_init+0x668>
081063c4 +0x48:  mov    (%eax),%eax
081063c6 +0x4a:  cmp    $0x4,%eax
081063c9 +0x4d:  je     081063e2 <+0x66>
081063cb +0x4f:  call   0807dd70 <_init+0x668>
081063d0 +0x54:  mov    (%eax),%eax
081063d2 +0x56:  cmp    $0xb,%eax
081063d5 +0x59:  je     081063e2 <+0x66>
081063d7 +0x5b:  call   0807dd70 <_init+0x668>
081063dc +0x60:  mov    (%eax),%eax
081063de +0x62:  test   %eax,%eax
081063e0 +0x64:  jne    081063e9 <+0x6d>
081063e2 +0x66:  mov    $0x0,%eax
081063e7 +0x6b:  jmp    08106453 <+0xd7>
081063e9 +0x6d:  call   0807dd70 <_init+0x668>
081063ee +0x72:  mov    (%eax),%eax
081063f0 +0x74:  mov    %eax,(%esp)
081063f3 +0x77:  call   0807d730 <_init+0x28>
081063f8 +0x7c:  mov    %eax,%ebx
081063fa +0x7e:  call   0807dd70 <_init+0x668>
081063ff +0x83:  mov    (%eax),%edi
08106401 +0x85:  mov    0x8(%ebp),%eax
08106404 +0x88:  mov    0x18(%eax),%esi
08106407 +0x8b:  movl   $0x0,0xc(%esp)
0810640f +0x93:  movl   $0xc8,0x8(%esp)
08106417 +0x9b:  movl   $&_ZZN15CmmChannelProxy10SendPacketEPciE19__PRETTY_FUNCTION__,0x4(%esp)
0810641f +0xa3:  lea    -0x2c(%ebp),%eax
08106422 +0xa6:  mov    %eax,(%esp)
08106425 +0xa9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810642a +0xae:  mov    %ebx,0x10(%esp)
0810642e +0xb2:  mov    %edi,0xc(%esp)
08106432 +0xb6:  mov    %esi,0x8(%esp)
08106436 +0xba:  movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
0810643e +0xc2:  lea    -0x2c(%ebp),%eax
08106441 +0xc5:  mov    %eax,(%esp)
08106444 +0xc8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08106449 +0xcd:  mov    $0xffffffff,%eax
0810644e +0xd2:  jmp    08106453 <+0xd7>
08106450 +0xd4:  mov    -0x1c(%ebp),%eax
08106453 +0xd7:  add    $0x4c,%esp
08106456 +0xda:  pop    %ebx
08106457 +0xdb:  pop    %esi
08106458 +0xdc:  pop    %edi
08106459 +0xdd:  pop    %ebp
0810645a +0xde:  ret
0810645b +0xdf:  nop
```

## 反编译 C

```c
// CmmChannelProxy::SendPacket @ 0x810637c

/* CmmChannelProxy::SendPacket(char*, int) */

ssize_t __thiscall CmmChannelProxy::SendPacket(CmmChannelProxy *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  cMyTrace local_30 [16];
  ssize_t local_20;
  
  local_20 = write(*(int *)(this + 0x18),param_1,param_2);
  if (local_20 < 1) {
    piVar3 = __errno_location();
    if ((((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 4)) ||
        (piVar3 = __errno_location(), *piVar3 == 0xb)) ||
       (piVar3 = __errno_location(), *piVar3 == 0)) {
      local_20 = 0;
    }
    else {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar2 = *(undefined4 *)(this + 0x18);
      cMyTrace::cMyTrace(local_30,"int CmmChannelProxy::SendPacket(char*, int)",200,0);
      cMyTrace::operator()(local_30,"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar2,iVar1,pcVar4)
      ;
      local_20 = -1;
    }
  }
  return local_20;
}
```
