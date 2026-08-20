# init

`_GLOBAL__I__ZN8Sanicova4CPad4initEv`

`global constructors keyed to Sanicova::CPad::init()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Sanicova::CPad` | `0x085999cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085999cc  _GLOBAL__I__ZN8Sanicova4CPad4initEv
#           global constructors keyed to Sanicova::CPad::init()
# range [0x085999cc, 0x085999ff]
085999cc +0x00:  push   %ebp
085999cd +0x01:  mov    %esp,%ebp
085999cf +0x03:  sub    $0x18,%esp
085999d2 +0x06:  movl   $0xffff,0x4(%esp)
085999da +0x0e:  movl   $0x1,(%esp)
085999e1 +0x15:  call   0859998c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085999e6 +0x1a:  leave
085999e7 +0x1b:  ret
085999e8 +0x1c:  push   %ebp
085999e9 +0x1d:  mov    %esp,%ebp
085999eb +0x1f:  sub    $0x4,%esp
085999ee +0x22:  mov    0xc(%ebp),%eax
085999f1 +0x25:  mov    %al,-0x4(%ebp)
085999f4 +0x28:  mov    0x8(%ebp),%eax
085999f7 +0x2b:  movzbl -0x4(%ebp),%edx
085999fb +0x2f:  mov    %dl,0x3d(%eax)
085999fe +0x32:  leave
085999ff +0x33:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85999cc

/* Sanicova::CPad::init() */

void Sanicova::CPad::_GLOBAL__I_init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
