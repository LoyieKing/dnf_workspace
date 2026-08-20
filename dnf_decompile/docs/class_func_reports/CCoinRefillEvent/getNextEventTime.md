# getNextEventTime

`_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm`

`CCoinRefillEvent::getNextEventTime(tm const&) const`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832c148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c148  _ZNK16CCoinRefillEvent16getNextEventTimeERK2tm
#           CCoinRefillEvent::getNextEventTime(tm const&) const
# range [0x0832c148, 0x0832c1fd]
0832c148 +0x00:  push   %ebp
0832c149 +0x01:  mov    %esp,%ebp
0832c14b +0x03:  push   %ebx
0832c14c +0x04:  sub    $0x14,%esp
0832c14f +0x07:  movl   $0x1,-0x10(%ebp)
0832c156 +0x0e:  jmp    0832c19b <+0x53>
0832c158 +0x10:  mov    -0x10(%ebp),%edx
0832c15b +0x13:  mov    0x8(%ebp),%eax
0832c15e +0x16:  mov    0xc(%eax,%edx,4),%ebx
0832c162 +0x1a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0832c167 +0x1f:  mov    0x37c(%eax),%eax
0832c16d +0x25:  cmp    %eax,%ebx
0832c16f +0x27:  sete   %al
0832c172 +0x2a:  test   %al,%al
0832c174 +0x2c:  jne    0832c196 <+0x4e>
0832c176 +0x2e:  mov    0xc(%ebp),%eax
0832c179 +0x31:  mov    0x8(%eax),%ecx
0832c17c +0x34:  mov    -0x10(%ebp),%edx
0832c17f +0x37:  mov    0x8(%ebp),%eax
0832c182 +0x3a:  mov    0xc(%eax,%edx,4),%eax
0832c186 +0x3e:  cmp    %eax,%ecx
0832c188 +0x40:  jge    0832c197 <+0x4f>
0832c18a +0x42:  mov    -0x10(%ebp),%edx
0832c18d +0x45:  mov    0x8(%ebp),%eax
0832c190 +0x48:  mov    0xc(%eax,%edx,4),%eax
0832c194 +0x4c:  jmp    0832c1f8 <+0xb0>
0832c196 +0x4e:  nop
0832c197 +0x4f:  addl   $0x1,-0x10(%ebp)
0832c19b +0x53:  mov    0x8(%ebp),%eax
0832c19e +0x56:  mov    0xc(%eax),%eax
0832c1a1 +0x59:  cmp    -0x10(%ebp),%eax
0832c1a4 +0x5c:  setge  %al
0832c1a7 +0x5f:  test   %al,%al
0832c1a9 +0x61:  jne    0832c158 <+0x10>
0832c1ab +0x63:  movl   $0x1,-0xc(%ebp)
0832c1b2 +0x6a:  jmp    0832c1e2 <+0x9a>
0832c1b4 +0x6c:  mov    -0xc(%ebp),%edx
0832c1b7 +0x6f:  mov    0x8(%ebp),%eax
0832c1ba +0x72:  mov    0xc(%eax,%edx,4),%ebx
0832c1be +0x76:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0832c1c3 +0x7b:  mov    0x37c(%eax),%eax
0832c1c9 +0x81:  cmp    %eax,%ebx
0832c1cb +0x83:  setne  %al
0832c1ce +0x86:  test   %al,%al
0832c1d0 +0x88:  je     0832c1de <+0x96>
0832c1d2 +0x8a:  mov    -0xc(%ebp),%edx
0832c1d5 +0x8d:  mov    0x8(%ebp),%eax
0832c1d8 +0x90:  mov    0xc(%eax,%edx,4),%eax
0832c1dc +0x94:  jmp    0832c1f8 <+0xb0>
0832c1de +0x96:  addl   $0x1,-0xc(%ebp)
0832c1e2 +0x9a:  mov    0x8(%ebp),%eax
0832c1e5 +0x9d:  mov    0xc(%eax),%eax
0832c1e8 +0xa0:  cmp    -0xc(%ebp),%eax
0832c1eb +0xa3:  setge  %al
0832c1ee +0xa6:  test   %al,%al
0832c1f0 +0xa8:  jne    0832c1b4 <+0x6c>
0832c1f2 +0xaa:  mov    0x8(%ebp),%eax
0832c1f5 +0xad:  mov    0x10(%eax),%eax
0832c1f8 +0xb0:  add    $0x14,%esp
0832c1fb +0xb3:  pop    %ebx
0832c1fc +0xb4:  pop    %ebp
0832c1fd +0xb5:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::getNextEventTime @ 0x832c148

/* CCoinRefillEvent::getNextEventTime(tm const&) const */

undefined4 __thiscall CCoinRefillEvent::getNextEventTime(CCoinRefillEvent *this,tm *param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = 1;
  while( true ) {
    if (*(int *)(this + 0xc) < local_14) {
      local_10 = 1;
      while( true ) {
        if (*(int *)(this + 0xc) < local_10) {
          return *(undefined4 *)(this + 0x10);
        }
        iVar1 = *(int *)(this + local_10 * 4 + 0xc);
        iVar2 = G_CEnvironment();
        if (iVar1 != *(int *)(iVar2 + 0x37c)) break;
        local_10 = local_10 + 1;
      }
      return *(undefined4 *)(this + local_10 * 4 + 0xc);
    }
    iVar1 = *(int *)(this + local_14 * 4 + 0xc);
    iVar2 = G_CEnvironment();
    if ((iVar1 != *(int *)(iVar2 + 0x37c)) &&
       (param_1->tm_hour < *(int *)(this + local_14 * 4 + 0xc))) break;
    local_14 = local_14 + 1;
  }
  return *(undefined4 *)(this + local_14 * 4 + 0xc);
}
```
