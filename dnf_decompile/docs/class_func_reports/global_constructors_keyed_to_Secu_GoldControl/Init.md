# Init

`_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser`

`global constructors keyed to Secu_GoldControl::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_GoldControl` | `0x08287f4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287f4e  _GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser
#           global constructors keyed to Secu_GoldControl::Init(CUser*)
# range [0x08287f4e, 0x0828805f]
08287f4e +0x000:  push   %ebp
08287f4f +0x001:  mov    %esp,%ebp
08287f51 +0x003:  sub    $0x18,%esp
08287f54 +0x006:  movl   $0xffff,0x4(%esp)
08287f5c +0x00e:  movl   $0x1,(%esp)
08287f63 +0x015:  call   08287f0e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08287f68 +0x01a:  leave
08287f69 +0x01b:  ret
08287f6a +0x01c:  push   %ebp
08287f6b +0x01d:  mov    %esp,%ebp
08287f6d +0x01f:  mov    0x8(%ebp),%eax
08287f70 +0x022:  movl   $0x0,(%eax)
08287f76 +0x028:  movl   $0x0,0x4(%eax)
08287f7d +0x02f:  mov    0x8(%ebp),%eax
08287f80 +0x032:  movl   $0x0,0x8(%eax)
08287f87 +0x039:  movl   $0x0,0xc(%eax)
08287f8e +0x040:  mov    0x8(%ebp),%eax
08287f91 +0x043:  movl   $0x0,0x10(%eax)
08287f98 +0x04a:  movl   $0x0,0x14(%eax)
08287f9f +0x051:  mov    0x8(%ebp),%eax
08287fa2 +0x054:  movl   $0x0,0x18(%eax)
08287fa9 +0x05b:  movl   $0x0,0x1c(%eax)
08287fb0 +0x062:  mov    0x8(%ebp),%eax
08287fb3 +0x065:  movl   $0x0,0x20(%eax)
08287fba +0x06c:  movl   $0x0,0x24(%eax)
08287fc1 +0x073:  mov    0x8(%ebp),%eax
08287fc4 +0x076:  movl   $0x0,0x28(%eax)
08287fcb +0x07d:  movl   $0x0,0x2c(%eax)
08287fd2 +0x084:  mov    0x8(%ebp),%eax
08287fd5 +0x087:  movw   $0x0,0x30(%eax)
08287fdb +0x08d:  mov    0x8(%ebp),%eax
08287fde +0x090:  movw   $0x0,0x32(%eax)
08287fe4 +0x096:  mov    0x8(%ebp),%eax
08287fe7 +0x099:  movw   $0x0,0x34(%eax)
08287fed +0x09f:  mov    0x8(%ebp),%eax
08287ff0 +0x0a2:  movw   $0x0,0x36(%eax)
08287ff6 +0x0a8:  mov    0x8(%ebp),%eax
08287ff9 +0x0ab:  movw   $0x0,0x38(%eax)
08287fff +0x0b1:  mov    0x8(%ebp),%eax
08288002 +0x0b4:  movw   $0x0,0x3a(%eax)
08288008 +0x0ba:  pop    %ebp
08288009 +0x0bb:  ret
0828800a +0x0bc:  push   %ebp
0828800b +0x0bd:  mov    %esp,%ebp
0828800d +0x0bf:  sub    $0x18,%esp
08288010 +0x0c2:  movl   $0x3c,0x8(%esp)
08288018 +0x0ca:  movl   $0x0,0x4(%esp)
08288020 +0x0d2:  mov    0x8(%ebp),%eax
08288023 +0x0d5:  mov    %eax,(%esp)
08288026 +0x0d8:  call   0807dcc0 <_init+0x5b8>
0828802b +0x0dd:  leave
0828802c +0x0de:  ret
0828802d +0x0df:  nop
0828802e +0x0e0:  push   %ebp
0828802f +0x0e1:  mov    %esp,%ebp
08288031 +0x0e3:  sub    $0x18,%esp
08288034 +0x0e6:  movl   $0x3c,0x8(%esp)
0828803c +0x0ee:  mov    0x8(%ebp),%eax
0828803f +0x0f1:  mov    %eax,0x4(%esp)
08288043 +0x0f5:  mov    0xc(%ebp),%eax
08288046 +0x0f8:  mov    %eax,(%esp)
08288049 +0x0fb:  call   0807d8a0 <_init+0x198>
0828804e +0x100:  leave
0828804f +0x101:  ret
08288050 +0x102:  push   %ebp
08288051 +0x103:  mov    %esp,%ebp
08288053 +0x105:  mov    0x8(%ebp),%eax
08288056 +0x108:  add    $0x6ee2c,%eax
0828805b +0x10d:  pop    %ebp
0828805c +0x10e:  ret
0828805d +0x10f:  nop
0828805e +0x110:  nop
0828805f +0x111:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8287f4e

/* Secu_GoldControl::Init(CUser*) */

void Secu_GoldControl::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
