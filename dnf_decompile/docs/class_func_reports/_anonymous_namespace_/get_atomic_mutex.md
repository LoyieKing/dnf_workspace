# get_atomic_mutex

`_ZN12_GLOBAL__N_116get_atomic_mutexEv`

`(anonymous namespace)::get_atomic_mutex()`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)` | `0x086d9230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9230  _ZN12_GLOBAL__N_116get_atomic_mutexEv
#           (anonymous namespace)::get_atomic_mutex()
# range [0x086d9230, 0x086d92cf]
086d9230 +0x00:  push   %ebp
086d9231 +0x01:  mov    %esp,%ebp
086d9233 +0x03:  sub    $0x38,%esp
086d9236 +0x06:  mov    %gs:0x14,%eax
086d923c +0x0c:  mov    %eax,-0xc(%ebp)
086d923f +0x0f:  xor    %eax,%eax
086d9241 +0x11:  cmpb   $0x0,&_ZGVZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex
086d9248 +0x18:  je     086d9260 <+0x30>
086d924a +0x1a:  mov    -0xc(%ebp),%edx
086d924d +0x1d:  xor    %gs:0x14,%edx
086d9254 +0x24:  mov    $&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex,%eax
086d9259 +0x29:  jne    086d92c2 <+0x92>
086d925b +0x2b:  leave
086d925c +0x2c:  ret
086d925d +0x2d:  lea    0x0(%esi),%esi
086d9260 +0x30:  movl   $&_ZGVZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex,(%esp)
086d9267 +0x37:  call   08725330 <__cxa_guard_acquire>
086d926c +0x3c:  test   %eax,%eax
086d926e +0x3e:  je     086d924a <+0x1a>
086d9270 +0x40:  lea    -0x24(%ebp),%edx
086d9273 +0x43:  xor    %eax,%eax
086d9275 +0x45:  movl   $0x0,(%edx,%eax,1)
086d927c +0x4c:  add    $0x4,%eax
086d927f +0x4f:  cmp    $0x18,%eax
086d9282 +0x52:  jb     086d9275 <+0x45>
086d9284 +0x54:  mov    -0x24(%ebp),%eax
086d9287 +0x57:  movl   $&_ZGVZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex,(%esp)
086d928e +0x5e:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex
086d9293 +0x63:  mov    -0x20(%ebp),%eax
086d9296 +0x66:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex+0x4
086d929b +0x6b:  mov    -0x1c(%ebp),%eax
086d929e +0x6e:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex+0x8
086d92a3 +0x73:  mov    -0x18(%ebp),%eax
086d92a6 +0x76:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex+0xc
086d92ab +0x7b:  mov    -0x14(%ebp),%eax
086d92ae +0x7e:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex+0x10
086d92b3 +0x83:  mov    -0x10(%ebp),%eax
086d92b6 +0x86:  mov    %eax,&_ZZN12_GLOBAL__N_116get_atomic_mutexEvE12atomic_mutex+0x14
086d92bb +0x8b:  call   08725250 <__cxa_guard_release>
086d92c0 +0x90:  jmp    086d924a <+0x1a>
086d92c2 +0x92:  call   0807d980 <_init+0x278>
086d92c7 +0x97:  nop
086d92c8 +0x98:  nop
086d92c9 +0x99:  nop
086d92ca +0x9a:  nop
086d92cb +0x9b:  nop
086d92cc +0x9c:  nop
086d92cd +0x9d:  nop
086d92ce +0x9e:  nop
086d92cf +0x9f:  nop
```

## 反编译 C

```c
// get_atomic_mutex @ 0x86d9230

/* (anonymous namespace)::get_atomic_mutex() */

undefined1 * (anonymous_namespace)::get_atomic_mutex(void)

{
  int iVar1;
  uint uVar2;
  int in_GS_OFFSET;
  undefined4 local_28 [6];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (get_atomic_mutex()::atomic_mutex == '\0') {
    iVar1 = __cxa_guard_acquire(&get_atomic_mutex()::atomic_mutex);
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        *(undefined4 *)((int)local_28 + uVar2) = 0;
        uVar2 = uVar2 + 4;
      } while (uVar2 < 0x18);
      get_atomic_mutex()::atomic_mutex._0_4_ = local_28[0];
      get_atomic_mutex()::atomic_mutex._4_4_ = local_28[1];
      get_atomic_mutex()::atomic_mutex._8_4_ = local_28[2];
      get_atomic_mutex()::atomic_mutex._12_4_ = local_28[3];
      get_atomic_mutex()::atomic_mutex._16_4_ = local_28[4];
      get_atomic_mutex()::atomic_mutex._20_4_ = local_28[5];
      __cxa_guard_release(&get_atomic_mutex()::atomic_mutex);
    }
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return get_atomic_mutex()::atomic_mutex;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
```
