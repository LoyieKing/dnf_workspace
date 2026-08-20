# IsEtcOptionChanged

`_ZN11CGameOption18IsEtcOptionChangedER10CETCOption`

`CGameOption::IsEtcOptionChanged(CETCOption&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6f46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6f46  _ZN11CGameOption18IsEtcOptionChangedER10CETCOption
#           CGameOption::IsEtcOptionChanged(CETCOption&)
# range [0x084b6f46, 0x084b6f83]
084b6f46 +0x00:  push   %ebp
084b6f47 +0x01:  mov    %esp,%ebp
084b6f49 +0x03:  sub    $0x28,%esp
084b6f4c +0x06:  mov    0x8(%ebp),%eax
084b6f4f +0x09:  lea    0x17a(%eax),%edx
084b6f55 +0x0f:  movl   $0x48,0x8(%esp)
084b6f5d +0x17:  mov    0xc(%ebp),%eax
084b6f60 +0x1a:  mov    %eax,0x4(%esp)
084b6f64 +0x1e:  mov    %edx,(%esp)
084b6f67 +0x21:  call   0807dc90 <_init+0x588>
084b6f6c +0x26:  mov    %eax,-0xc(%ebp)
084b6f6f +0x29:  cmpl   $0x0,-0xc(%ebp)
084b6f73 +0x2d:  jne    084b6f7c <+0x36>
084b6f75 +0x2f:  mov    $0x0,%eax
084b6f7a +0x34:  jmp    084b6f81 <+0x3b>
084b6f7c +0x36:  mov    $0x1,%eax
084b6f81 +0x3b:  leave
084b6f82 +0x3c:  ret
084b6f83 +0x3d:  nop
```

## 反编译 C

```c
// CGameOption::IsEtcOptionChanged @ 0x84b6f46

/* CGameOption::IsEtcOptionChanged(CETCOption&) */

bool __thiscall CGameOption::IsEtcOptionChanged(CGameOption *this,CETCOption *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this + 0x17a,param_1,0x48);
  return iVar1 != 0;
}
```
