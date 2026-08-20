# SetGuildInfoProxy

`_ZN5CUser17SetGuildInfoProxyER12STGuildProxy`

`CUser::SetGuildInfoProxy(STGuildProxy&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cd0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cd0a  _ZN5CUser17SetGuildInfoProxyER12STGuildProxy
#           CUser::SetGuildInfoProxy(STGuildProxy&)
# range [0x0865cd0a, 0x0865cd51]
0865cd0a +0x00:  push   %ebp
0865cd0b +0x01:  mov    %esp,%ebp
0865cd0d +0x03:  sub    $0x18,%esp
0865cd10 +0x06:  mov    0xc(%ebp),%eax
0865cd13 +0x09:  movzbl 0x17(%eax),%edx
0865cd17 +0x0d:  mov    0x8(%ebp),%eax
0865cd1a +0x10:  mov    %dl,0x8d03b(%eax)
0865cd20 +0x16:  mov    0xc(%ebp),%eax
0865cd23 +0x19:  mov    0x8(%ebp),%edx
0865cd26 +0x1c:  add    $0x8d020,%edx
0865cd2c +0x22:  movl   $0x16,0x8(%esp)
0865cd34 +0x2a:  mov    %eax,0x4(%esp)
0865cd38 +0x2e:  mov    %edx,(%esp)
0865cd3b +0x31:  call   0807d8a0 <_init+0x198>
0865cd40 +0x36:  mov    0xc(%ebp),%eax
0865cd43 +0x39:  movzbl 0x18(%eax),%edx
0865cd47 +0x3d:  mov    0x8(%ebp),%eax
0865cd4a +0x40:  mov    %dl,0x8d0b5(%eax)
0865cd50 +0x46:  leave
0865cd51 +0x47:  ret
```

## 反编译 C

```c
// CUser::SetGuildInfoProxy @ 0x865cd0a

/* CUser::SetGuildInfoProxy(STGuildProxy&) */

void __thiscall CUser::SetGuildInfoProxy(CUser *this,STGuildProxy *param_1)

{
  this[0x8d03b] = *(CUser *)(param_1 + 0x17);
  memcpy(this + 0x8d020,param_1,0x16);
  this[0x8d0b5] = *(CUser *)(param_1 + 0x18);
  return;
}
```
