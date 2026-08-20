# AcquireCharacterMemory

`_ZN15exchange_server22AcquireCharacterMemoryEi`

`exchange_server::AcquireCharacterMemory(int)`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f220  _ZN15exchange_server22AcquireCharacterMemoryEi
#           exchange_server::AcquireCharacterMemory(int)
# range [0x0848f220, 0x0848f23b]
0848f220 +0x00:  push   %ebp
0848f221 +0x01:  mov    %esp,%ebp
0848f223 +0x03:  sub    $0x18,%esp
0848f226 +0x06:  call   08490f71 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x1c4f>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x1c4f
0848f22b +0x0b:  mov    0x8(%ebp),%edx
0848f22e +0x0e:  mov    %edx,0x4(%esp)
0848f232 +0x12:  mov    %eax,(%esp)
0848f235 +0x15:  call   08490a8a <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x1768>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x1768
0848f23a +0x1a:  leave
0848f23b +0x1b:  ret
```

## 反编译 C

```c
// exchange_server::AcquireCharacterMemory @ 0x848f220

/* exchange_server::AcquireCharacterMemory(int) */

void exchange_server::AcquireCharacterMemory(int param_1)

{
  int iVar1;
  
  iVar1 = GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::AcquireCharacter(iVar1);
  return;
}
```
