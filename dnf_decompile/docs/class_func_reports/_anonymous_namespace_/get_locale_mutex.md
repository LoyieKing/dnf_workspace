# get_locale_mutex

`_ZN12_GLOBAL__N_116get_locale_mutexEv`

`(anonymous namespace)::get_locale_mutex()`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)` | `0x086dbd40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dbd40  _ZN12_GLOBAL__N_116get_locale_mutexEv
#           (anonymous namespace)::get_locale_mutex()
# range [0x086dbd40, 0x086dbdef]
086dbd40 +0x00:  push   %ebp
086dbd41 +0x01:  mov    %esp,%ebp
086dbd43 +0x03:  sub    $0x38,%esp
086dbd46 +0x06:  mov    %gs:0x14,%eax
086dbd4c +0x0c:  mov    %eax,-0xc(%ebp)
086dbd4f +0x0f:  xor    %eax,%eax
086dbd51 +0x11:  cmpb   $0x0,&_ZGVZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex
086dbd58 +0x18:  je     086dbd70 <+0x30>
086dbd5a +0x1a:  mov    -0xc(%ebp),%edx
086dbd5d +0x1d:  xor    %gs:0x14,%edx
086dbd64 +0x24:  mov    $&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex,%eax
086dbd69 +0x29:  jne    086dbdde <+0x9e>
086dbd6b +0x2b:  leave
086dbd6c +0x2c:  ret
086dbd6d +0x2d:  lea    0x0(%esi),%esi
086dbd70 +0x30:  movl   $&_ZGVZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex,(%esp)
086dbd77 +0x37:  call   08725330 <__cxa_guard_acquire>
086dbd7c +0x3c:  test   %eax,%eax
086dbd7e +0x3e:  je     086dbd5a <+0x1a>
086dbd80 +0x40:  mov    $&data#bb92cc41(.plt),%eax
086dbd85 +0x45:  test   %eax,%eax
086dbd87 +0x47:  je     086dbdcd <+0x8d>
086dbd89 +0x49:  lea    -0x24(%ebp),%edx
086dbd8c +0x4c:  xor    %eax,%eax
086dbd8e +0x4e:  movl   $0x0,(%edx,%eax,1)
086dbd95 +0x55:  add    $0x4,%eax
086dbd98 +0x58:  cmp    $0x18,%eax
086dbd9b +0x5b:  jb     086dbd8e <+0x4e>
086dbd9d +0x5d:  mov    -0x24(%ebp),%eax
086dbda0 +0x60:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex
086dbda5 +0x65:  mov    -0x20(%ebp),%eax
086dbda8 +0x68:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex+0x4
086dbdad +0x6d:  mov    -0x1c(%ebp),%eax
086dbdb0 +0x70:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex+0x8
086dbdb5 +0x75:  mov    -0x18(%ebp),%eax
086dbdb8 +0x78:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex+0xc
086dbdbd +0x7d:  mov    -0x14(%ebp),%eax
086dbdc0 +0x80:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex+0x10
086dbdc5 +0x85:  mov    -0x10(%ebp),%eax
086dbdc8 +0x88:  mov    %eax,&_ZZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex+0x14
086dbdcd +0x8d:  movl   $&_ZGVZN12_GLOBAL__N_116get_locale_mutexEvE12locale_mutex,(%esp)
086dbdd4 +0x94:  call   08725250 <__cxa_guard_release>
086dbdd9 +0x99:  jmp    086dbd5a <+0x1a>
086dbdde +0x9e:  call   0807d980 <_init+0x278>
086dbde3 +0xa3:  nop
086dbde4 +0xa4:  nop
086dbde5 +0xa5:  nop
086dbde6 +0xa6:  nop
086dbde7 +0xa7:  nop
086dbde8 +0xa8:  nop
086dbde9 +0xa9:  nop
086dbdea +0xaa:  nop
086dbdeb +0xab:  nop
086dbdec +0xac:  nop
086dbded +0xad:  nop
086dbdee +0xae:  nop
086dbdef +0xaf:  nop
```

## 反编译 C

```c
// get_locale_mutex @ 0x86dbd40

/* (anonymous namespace)::get_locale_mutex() */

undefined1 * (anonymous_namespace)::get_locale_mutex(void)

{
  int iVar1;
  uint uVar2;
  int in_GS_OFFSET;
  undefined4 local_28 [6];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if ((get_locale_mutex()::locale_mutex == '\0') &&
     (iVar1 = __cxa_guard_acquire(&get_locale_mutex()::locale_mutex), iVar1 != 0)) {
    uVar2 = 0;
    do {
      *(undefined4 *)((int)local_28 + uVar2) = 0;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x18);
    get_locale_mutex()::locale_mutex._0_4_ = local_28[0];
    get_locale_mutex()::locale_mutex._4_4_ = local_28[1];
    get_locale_mutex()::locale_mutex._8_4_ = local_28[2];
    get_locale_mutex()::locale_mutex._12_4_ = local_28[3];
    get_locale_mutex()::locale_mutex._16_4_ = local_28[4];
    get_locale_mutex()::locale_mutex._20_4_ = local_28[5];
    __cxa_guard_release(&get_locale_mutex()::locale_mutex);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return get_locale_mutex()::locale_mutex;
}
```
