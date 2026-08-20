# process_event

`_ZN18Inter_CreateCharac13process_eventEP5CUserP17SIG_CREATE_CHARAC`

`Inter_CreateCharac::process_event(CUser*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `Inter_CreateCharac` | `0x084bf4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bf4ac  _ZN18Inter_CreateCharac13process_eventEP5CUserP17SIG_CREATE_CHARAC
#           Inter_CreateCharac::process_event(CUser*, SIG_CREATE_CHARAC*)
# range [0x084bf4ac, 0x084bf4cd]
084bf4ac +0x00:  push   %ebp
084bf4ad +0x01:  mov    %esp,%ebp
084bf4af +0x03:  sub    $0x18,%esp
084bf4b2 +0x06:  mov    0x10(%ebp),%eax
084bf4b5 +0x09:  mov    %eax,0x8(%esp)
084bf4b9 +0x0d:  mov    0xc(%ebp),%eax
084bf4bc +0x10:  mov    %eax,0x4(%esp)
084bf4c0 +0x14:  mov    0x8(%ebp),%eax
084bf4c3 +0x17:  mov    %eax,(%esp)
084bf4c6 +0x1a:  call   084bf4ce <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC>  ; Inter_CreateCharac::process_createGift(CUser*, SIG_CREATE_CHARAC*)
084bf4cb +0x1f:  leave
084bf4cc +0x20:  ret
084bf4cd +0x21:  nop
```

## 反编译 C

```c
// Inter_CreateCharac::process_event @ 0x84bf4ac

/* Inter_CreateCharac::process_event(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
Inter_CreateCharac::process_event
          (Inter_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  process_createGift(this,param_1,param_2);
  return;
}
```
