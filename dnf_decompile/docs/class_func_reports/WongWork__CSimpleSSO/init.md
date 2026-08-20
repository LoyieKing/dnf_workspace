# init

`_ZN8WongWork10CSimpleSSO4initEP5MySQL`

`WongWork::CSimpleSSO::init(MySQL*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x086027fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086027fc  _ZN8WongWork10CSimpleSSO4initEP5MySQL
#           WongWork::CSimpleSSO::init(MySQL*)
# range [0x086027fc, 0x086028b3]
086027fc +0x00:  push   %ebp
086027fd +0x01:  mov    %esp,%ebp
086027ff +0x03:  sub    $0x38,%esp
08602802 +0x06:  mov    0x8(%ebp),%eax
08602805 +0x09:  mov    0xc(%ebp),%edx
08602808 +0x0c:  mov    %edx,0xd0860(%eax)
0860280e +0x12:  movl   $0x0,-0x10(%ebp)
08602815 +0x19:  jmp    086028a2 <+0xa6>
0860281a +0x1e:  movl   $0x0,-0xc(%ebp)
08602821 +0x25:  jmp    08602893 <+0x97>
08602823 +0x27:  mov    -0x10(%ebp),%edx
08602826 +0x2a:  mov    -0xc(%ebp),%ecx
08602829 +0x2d:  mov    %edx,%eax
0860282b +0x2f:  add    %eax,%eax
0860282d +0x31:  add    %edx,%eax
0860282f +0x33:  shl    $0x3,%eax
08602832 +0x36:  add    %ecx,%eax
08602834 +0x38:  mov    &_ZN8WongWork10CSimpleSSO12strKeyTable_E(,%eax,4),%edx
0860283b +0x3f:  mov    -0x10(%ebp),%eax
0860283e +0x42:  mov    -0xc(%ebp),%ecx
08602841 +0x45:  imul   $0x47c,%ecx,%ecx
08602847 +0x4b:  imul   $0x6ba0,%eax,%eax
0860284d +0x51:  lea    (%ecx,%eax,1),%eax
08602850 +0x54:  add    0x8(%ebp),%eax
08602853 +0x57:  movl   $0x0,0x1c(%esp)
0860285b +0x5f:  movl   $0x0,0x18(%esp)
08602863 +0x67:  movl   $0x10,0x14(%esp)
0860286b +0x6f:  movl   $0x10,0x10(%esp)
08602873 +0x77:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0860287b +0x7f:  movl   $0x20,0x8(%esp)
08602883 +0x87:  mov    %edx,0x4(%esp)
08602887 +0x8b:  mov    %eax,(%esp)
0860288a +0x8e:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0860288f +0x93:  addl   $0x1,-0xc(%ebp)
08602893 +0x97:  cmpl   $0x17,-0xc(%ebp)
08602897 +0x9b:  setle  %al
0860289a +0x9e:  test   %al,%al
0860289c +0xa0:  jne    08602823 <+0x27>
0860289e +0xa2:  addl   $0x1,-0x10(%ebp)
086028a2 +0xa6:  cmpl   $0x1e,-0x10(%ebp)
086028a6 +0xaa:  setle  %al
086028a9 +0xad:  test   %al,%al
086028ab +0xaf:  jne    0860281a <+0x1e>
086028b1 +0xb5:  leave
086028b2 +0xb6:  ret
086028b3 +0xb7:  nop
```

## 反编译 C

```c
// WongWork::CSimpleSSO::init @ 0x86027fc

/* WongWork::CSimpleSSO::init(MySQL*) */

void __thiscall WongWork::CSimpleSSO::init(CSimpleSSO *this,MySQL *param_1)

{
  int local_14;
  int local_10;
  
  *(MySQL **)(this + 0xd0860) = param_1;
  for (local_14 = 0; local_14 < 0x1f; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 0x18; local_10 = local_10 + 1) {
      CRijndael::Initialize
                ((CRijndael *)(this + local_10 * 0x47c + local_14 * 0x6ba0),
                 *(char **)(strKeyTable_ + (local_14 * 0x18 + local_10) * 4),0x20,
                 CRijndael::sm_chain0,0x10,0x10,0,0);
    }
  }
  return;
}
```
