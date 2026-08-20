# clear

`_ZNVSt9__atomic011atomic_flag5clearESt12memory_order`

`std::__atomic0::atomic_flag::clear(std::memory_order) volatile`

| 类 | 地址 |
|---|---|
| `std::__atomic0::atomic_flag` | `0x086d9330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9330  _ZNVSt9__atomic011atomic_flag5clearESt12memory_order
#           std::__atomic0::atomic_flag::clear(std::memory_order) volatile
# range [0x086d9330, 0x086d938f]
086d9330 +0x00:  push   %ebp
086d9331 +0x01:  mov    %esp,%ebp
086d9333 +0x03:  sub    $0x18,%esp
086d9336 +0x06:  mov    %ebx,-0x8(%ebp)
086d9339 +0x09:  mov    %esi,-0x4(%ebp)
086d933c +0x0c:  mov    0x8(%ebp),%esi
086d933f +0x0f:  call   086d9230 <_ZN12_GLOBAL__N_116get_atomic_mutexEv>  ; (anonymous namespace)::get_atomic_mutex()
086d9344 +0x14:  mov    %eax,%ebx
086d9346 +0x16:  mov    $&data#bb92cc41(.plt),%eax
086d934b +0x1b:  test   %eax,%eax
086d934d +0x1d:  je     086d936f <+0x3f>
086d934f +0x1f:  mov    %ebx,(%esp)
086d9352 +0x22:  call   0807e1f0 <_init+0xae8>
086d9357 +0x27:  test   %eax,%eax
086d9359 +0x29:  jne    086d937c <+0x4c>
086d935b +0x2b:  movb   $0x0,(%esi)
086d935e +0x2e:  mov    -0x4(%ebp),%esi
086d9361 +0x31:  mov    %ebx,0x8(%ebp)
086d9364 +0x34:  mov    -0x8(%ebp),%ebx
086d9367 +0x37:  mov    %ebp,%esp
086d9369 +0x39:  pop    %ebp
086d936a +0x3a:  jmp    0807dee0 <_init+0x7d8>
086d936f +0x3f:  movb   $0x0,(%esi)
086d9372 +0x42:  mov    -0x8(%ebp),%ebx
086d9375 +0x45:  mov    -0x4(%ebp),%esi
086d9378 +0x48:  mov    %ebp,%esp
086d937a +0x4a:  pop    %ebp
086d937b +0x4b:  ret
086d937c +0x4c:  mov    %eax,(%esp)
086d937f +0x4f:  call   086d96b0 <_ZSt20__throw_system_errori>  ; std::__throw_system_error(int)
086d9384 +0x54:  nop
086d9385 +0x55:  nop
086d9386 +0x56:  nop
086d9387 +0x57:  nop
086d9388 +0x58:  nop
086d9389 +0x59:  nop
086d938a +0x5a:  nop
086d938b +0x5b:  nop
086d938c +0x5c:  nop
086d938d +0x5d:  nop
086d938e +0x5e:  nop
086d938f +0x5f:  nop
```

## 反编译 C

```c
// std::__atomic0::atomic_flag::clear @ 0x86d9330

/* WARNING: Removing unreachable block (ram,0x086d936f) */
/* std::__atomic0::atomic_flag::clear(std::memory_order) volatile */

void std::__atomic0::atomic_flag::clear(undefined1 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_atomic_mutex();
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1);
  }
  *param_1 = 0;
  pthread_mutex_unlock(__mutex);
  return;
}
```
