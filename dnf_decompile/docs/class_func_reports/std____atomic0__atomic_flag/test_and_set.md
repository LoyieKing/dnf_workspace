# test_and_set

`_ZNVSt9__atomic011atomic_flag12test_and_setESt12memory_order`

`std::__atomic0::atomic_flag::test_and_set(std::memory_order) volatile`

| 类 | 地址 |
|---|---|
| `std::__atomic0::atomic_flag` | `0x086d92d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d92d0  _ZNVSt9__atomic011atomic_flag12test_and_setESt12memory_order
#           std::__atomic0::atomic_flag::test_and_set(std::memory_order) volatile
# range [0x086d92d0, 0x086d932f]
086d92d0 +0x00:  push   %ebp
086d92d1 +0x01:  mov    %esp,%ebp
086d92d3 +0x03:  sub    $0x28,%esp
086d92d6 +0x06:  mov    %ebx,-0xc(%ebp)
086d92d9 +0x09:  mov    0x8(%ebp),%ebx
086d92dc +0x0c:  mov    %esi,-0x8(%ebp)
086d92df +0x0f:  mov    %edi,-0x4(%ebp)
086d92e2 +0x12:  call   086d9230 <_ZN12_GLOBAL__N_116get_atomic_mutexEv>  ; (anonymous namespace)::get_atomic_mutex()
086d92e7 +0x17:  mov    %eax,%esi
086d92e9 +0x19:  mov    $&data#bb92cc41(.plt),%eax
086d92ee +0x1e:  test   %eax,%eax
086d92f0 +0x20:  je     086d931b <+0x4b>
086d92f2 +0x22:  mov    %esi,(%esp)
086d92f5 +0x25:  call   0807e1f0 <_init+0xae8>
086d92fa +0x2a:  test   %eax,%eax
086d92fc +0x2c:  jne    086d9323 <+0x53>
086d92fe +0x2e:  movzbl (%ebx),%edi
086d9301 +0x31:  movb   $0x1,(%ebx)
086d9304 +0x34:  mov    %esi,(%esp)
086d9307 +0x37:  call   0807dee0 <_init+0x7d8>
086d930c +0x3c:  mov    %edi,%eax
086d930e +0x3e:  mov    -0xc(%ebp),%ebx
086d9311 +0x41:  mov    -0x8(%ebp),%esi
086d9314 +0x44:  mov    -0x4(%ebp),%edi
086d9317 +0x47:  mov    %ebp,%esp
086d9319 +0x49:  pop    %ebp
086d931a +0x4a:  ret
086d931b +0x4b:  movzbl (%ebx),%edi
086d931e +0x4e:  movb   $0x1,(%ebx)
086d9321 +0x51:  jmp    086d930c <+0x3c>
086d9323 +0x53:  mov    %eax,(%esp)
086d9326 +0x56:  call   086d96b0 <_ZSt20__throw_system_errori>  ; std::__throw_system_error(int)
086d932b +0x5b:  nop
086d932c +0x5c:  nop
086d932d +0x5d:  nop
086d932e +0x5e:  nop
086d932f +0x5f:  nop
```

## 反编译 C

```c
// std::__atomic0::atomic_flag::test_and_set @ 0x86d92d0

/* WARNING: Removing unreachable block (ram,0x086d931b) */
/* std::__atomic0::atomic_flag::test_and_set(std::memory_order) volatile */

undefined1 std::__atomic0::atomic_flag::test_and_set(undefined1 *param_1)

{
  undefined1 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_atomic_mutex();
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    *param_1 = 1;
    pthread_mutex_unlock(__mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar2);
}
```
