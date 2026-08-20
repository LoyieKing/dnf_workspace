# setStringResourceLoaded

`_ZN14CStringManager23setStringResourceLoadedEv`

`CStringManager::setStringResourceLoaded()`

| 类 | 地址 |
|---|---|
| `CStringManager` | `0x08ac36d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac36d2  _ZN14CStringManager23setStringResourceLoadedEv
#           CStringManager::setStringResourceLoaded()
# range [0x08ac36d2, 0x08ac3713]
08ac36d2 +0x00:  push   %ebp
08ac36d3 +0x01:  mov    %esp,%ebp
08ac36d5 +0x03:  movb   $0x1,&_ZL12is_sr_loaded
08ac36dc +0x0a:  pop    %ebp
08ac36dd +0x0b:  ret
08ac36de +0x0c:  push   %ebp
08ac36df +0x0d:  mov    %esp,%ebp
08ac36e1 +0x0f:  sub    $0x28,%esp
08ac36e4 +0x12:  lea    0x10(%ebp),%eax
08ac36e7 +0x15:  mov    %eax,-0x10(%ebp)
08ac36ea +0x18:  mov    -0x10(%ebp),%edx
08ac36ed +0x1b:  mov    0x8(%ebp),%eax
08ac36f0 +0x1e:  mov    %edx,0xc(%esp)
08ac36f4 +0x22:  mov    0xc(%ebp),%edx
08ac36f7 +0x25:  mov    %edx,0x8(%esp)
08ac36fb +0x29:  movl   $0x20,0x4(%esp)
08ac3703 +0x31:  mov    %eax,(%esp)
08ac3706 +0x34:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08ac370b +0x39:  mov    %eax,-0xc(%ebp)
08ac370e +0x3c:  mov    -0xc(%ebp),%eax
08ac3711 +0x3f:  leave
08ac3712 +0x40:  ret
08ac3713 +0x41:  nop
```

## 反编译 C

```c
// CStringManager::setStringResourceLoaded @ 0x8ac36d2

/* CStringManager::setStringResourceLoaded() */

void CStringManager::setStringResourceLoaded(void)

{
  is_sr_loaded = 1;
  return;
}
```
