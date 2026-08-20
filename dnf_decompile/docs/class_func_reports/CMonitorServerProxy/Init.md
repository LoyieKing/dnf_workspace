# Init

`_ZN19CMonitorServerProxy4InitEv`

`CMonitorServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470a00  _ZN19CMonitorServerProxy4InitEv
#           CMonitorServerProxy::Init()
# range [0x08470a00, 0x08470a7b]
08470a00 +0x00:  push   %ebp
08470a01 +0x01:  mov    %esp,%ebp
08470a03 +0x03:  sub    $0x18,%esp
08470a06 +0x06:  mov    0x8(%ebp),%eax
08470a09 +0x09:  mov    0x4(%eax),%eax
08470a0c +0x0c:  test   %eax,%eax
08470a0e +0x0e:  jne    08470a17 <+0x17>
08470a10 +0x10:  mov    $0x1,%eax
08470a15 +0x15:  jmp    08470a7a <+0x7a>
08470a17 +0x17:  mov    0x8(%ebp),%eax
08470a1a +0x1a:  mov    %eax,(%esp)
08470a1d +0x1d:  call   08470a7c <_ZN19CMonitorServerProxy7InitUdpEv>  ; CMonitorServerProxy::InitUdp()
08470a22 +0x22:  xor    $0x1,%eax
08470a25 +0x25:  test   %al,%al
08470a27 +0x27:  je     08470a30 <+0x30>
08470a29 +0x29:  mov    $0x0,%eax
08470a2e +0x2e:  jmp    08470a7a <+0x7a>
08470a30 +0x30:  mov    0x8(%ebp),%eax
08470a33 +0x33:  mov    %eax,(%esp)
08470a36 +0x36:  call   08470ad6 <_ZN19CMonitorServerProxy7InitTcpEv>  ; CMonitorServerProxy::InitTcp()
08470a3b +0x3b:  xor    $0x1,%eax
08470a3e +0x3e:  test   %al,%al
08470a40 +0x40:  je     08470a49 <+0x49>
08470a42 +0x42:  mov    $0x0,%eax
08470a47 +0x47:  jmp    08470a7a <+0x7a>
08470a49 +0x49:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08470a4e +0x4e:  mov    %eax,(%esp)
08470a51 +0x51:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08470a56 +0x56:  cmp    $0x1,%eax
08470a59 +0x59:  sete   %al
08470a5c +0x5c:  test   %al,%al
08470a5e +0x5e:  je     08470a75 <+0x75>
08470a60 +0x60:  mov    &_ZN10GlobalData6gmListE,%eax
08470a65 +0x65:  movl   $0x0,0x4(%esp)
08470a6d +0x6d:  mov    %eax,(%esp)
08470a70 +0x70:  call   08299d54 <_ZN7Gm_List25SendGMList_To_UpperServerEi>  ; Gm_List::SendGMList_To_UpperServer(int)
08470a75 +0x75:  mov    $0x1,%eax
08470a7a +0x7a:  leave
08470a7b +0x7b:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::Init @ 0x8470a00

/* CMonitorServerProxy::Init() */

undefined4 __thiscall CMonitorServerProxy::Init(CMonitorServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  int iVar3;
  
  if (*(int *)(this + 4) == 0) {
    uVar2 = 1;
  }
  else {
    cVar1 = InitUdp(this);
    if (cVar1 == '\x01') {
      cVar1 = InitTcp(this);
      if (cVar1 == '\x01') {
        this_00 = (CEnvironment *)G_CEnvironment();
        iVar3 = CEnvironment::get_channel_no(this_00);
        if (iVar3 == 1) {
          Gm_List::SendGMList_To_UpperServer(GlobalData::gmList,0);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
