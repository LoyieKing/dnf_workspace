# checkDugeonInoutTime

`_ZN6CParty20checkDugeonInoutTimeEi`

`CParty::checkDugeonInoutTime(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f6e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f6e2  _ZN6CParty20checkDugeonInoutTimeEi
#           CParty::checkDugeonInoutTime(int)
# range [0x0859f6e2, 0x0859f75d]
0859f6e2 +0x00:  push   %ebp
0859f6e3 +0x01:  mov    %esp,%ebp
0859f6e5 +0x03:  sub    $0x28,%esp
0859f6e8 +0x06:  movl   $0x0,-0xc(%ebp)
0859f6ef +0x0d:  jmp    0859f739 <+0x57>
0859f6f1 +0x0f:  mov    -0xc(%ebp),%eax
0859f6f4 +0x12:  mov    %eax,0x4(%esp)
0859f6f8 +0x16:  mov    0x8(%ebp),%eax
0859f6fb +0x19:  mov    %eax,(%esp)
0859f6fe +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f703 +0x21:  xor    $0x1,%eax
0859f706 +0x24:  test   %al,%al
0859f708 +0x26:  jne    0859f734 <+0x52>
0859f70a +0x28:  mov    -0xc(%ebp),%edx
0859f70d +0x2b:  mov    0x8(%ebp),%ecx
0859f710 +0x2e:  mov    %edx,%eax
0859f712 +0x30:  add    %eax,%eax
0859f714 +0x32:  add    %edx,%eax
0859f716 +0x34:  shl    $0x3,%eax
0859f719 +0x37:  lea    (%ecx,%eax,1),%eax
0859f71c +0x3a:  add    $0x78,%eax
0859f71f +0x3d:  mov    (%eax),%eax
0859f721 +0x3f:  mov    %eax,(%esp)
0859f724 +0x42:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0859f729 +0x47:  test   %al,%al
0859f72b +0x49:  je     0859f735 <+0x53>
0859f72d +0x4b:  mov    $0x1,%eax
0859f732 +0x50:  jmp    0859f75b <+0x79>
0859f734 +0x52:  nop
0859f735 +0x53:  addl   $0x1,-0xc(%ebp)
0859f739 +0x57:  cmpl   $0x3,-0xc(%ebp)
0859f73d +0x5b:  setle  %al
0859f740 +0x5e:  test   %al,%al
0859f742 +0x60:  jne    0859f6f1 <+0xf>
0859f744 +0x62:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859f749 +0x67:  lea    0x68(%eax),%edx
0859f74c +0x6a:  mov    0xc(%ebp),%eax
0859f74f +0x6d:  mov    %eax,0x4(%esp)
0859f753 +0x71:  mov    %edx,(%esp)
0859f756 +0x74:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
0859f75b +0x79:  leave
0859f75c +0x7a:  ret
0859f75d +0x7b:  nop
```

## 反编译 C

```c
// CParty::checkDugeonInoutTime @ 0x859f6e2

/* CParty::checkDugeonInoutTime(int) */

undefined4 CParty::checkDugeonInoutTime(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      iVar2 = G_CDataManager();
      uVar3 = ServerParameterScript::isDungeonOpen(iVar2 + 0x68);
      return uVar3;
    }
    cVar1 = _checkValidUser((CParty *)param_1,local_10);
    if ((cVar1 == '\x01') &&
       (cVar1 = CUser::isGMUser(*(CUser **)(param_1 + local_10 * 0x18 + 0x78)), cVar1 != '\0'))
    break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
