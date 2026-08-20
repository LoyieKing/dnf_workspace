# dispatch_sig

`_ZN23Inter_LoadCleanPadPoint12dispatch_sigEP5CUserPci`

`Inter_LoadCleanPadPoint::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCleanPadPoint` | `0x084d5586` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d5586  _ZN23Inter_LoadCleanPadPoint12dispatch_sigEP5CUserPci
#           Inter_LoadCleanPadPoint::dispatch_sig(CUser*, char*, int)
# range [0x084d5586, 0x084d55a3]
084d5586 +0x00:  push   %ebp
084d5587 +0x01:  mov    %esp,%ebp
084d5589 +0x03:  sub    $0x28,%esp
084d558c +0x06:  mov    0x10(%ebp),%eax
084d558f +0x09:  mov    %eax,-0xc(%ebp)
084d5592 +0x0c:  mov    -0xc(%ebp),%eax
084d5595 +0x0f:  mov    %eax,(%esp)
084d5598 +0x12:  call   080f8be0 <_ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi>  ; WongWork::CMCAPManager::setPointPerHackType(int*)
084d559d +0x17:  mov    $0x0,%eax
084d55a2 +0x1c:  leave
084d55a3 +0x1d:  ret
```

## 反编译 C

```c
// Inter_LoadCleanPadPoint::dispatch_sig @ 0x84d5586

/* Inter_LoadCleanPadPoint::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCleanPadPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  WongWork::CMCAPManager::setPointPerHackType((int *)param_3);
  return 0;
}
```
