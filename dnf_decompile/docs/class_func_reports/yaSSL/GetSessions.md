# GetSessions

`_ZN5yaSSL11GetSessionsEv`

`yaSSL::GetSessions()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087511a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087511a0  _ZN5yaSSL11GetSessionsEv
#           yaSSL::GetSessions()
# range [0x087511a0, 0x08751219]
087511a0 +0x00:  push   %ebp
087511a1 +0x01:  mov    %esp,%ebp
087511a3 +0x03:  push   %ebx
087511a4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087511a9 +0x09:  add    $0xc1b9ef,%ebx
087511af +0x0f:  sub    $0x24,%esp
087511b2 +0x12:  mov    0x124c80(%ebx),%eax
087511b8 +0x18:  test   %eax,%eax
087511ba +0x1a:  je     087511c8 <+0x28>
087511bc +0x1c:  add    $0x24,%esp
087511bf +0x1f:  pop    %ebx
087511c0 +0x20:  pop    %ebp
087511c1 +0x21:  ret
087511c2 +0x22:  lea    0x0(%esi),%esi
087511c8 +0x28:  movb   $0x0,0x4(%esp)
087511cd +0x2d:  movl   $0x18,(%esp)
087511d4 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087511d9 +0x39:  movl   $0x0,(%eax)
087511df +0x3f:  lea    0xc(%eax),%edx
087511e2 +0x42:  movl   $0x0,0x4(%eax)
087511e9 +0x49:  movl   $0x0,0x8(%eax)
087511f0 +0x50:  mov    %eax,-0xc(%ebp)
087511f3 +0x53:  mov    %edx,(%esp)
087511f6 +0x56:  call   08799040 <_ZN5yaSSL10RandomPoolC1Ev>  ; yaSSL::RandomPool::RandomPool()
087511fb +0x5b:  mov    -0xc(%ebp),%eax
087511fe +0x5e:  movl   $0x0,0x14(%eax)
08751205 +0x65:  mov    %eax,0x124c80(%ebx)
0875120b +0x6b:  add    $0x24,%esp
0875120e +0x6e:  pop    %ebx
0875120f +0x6f:  pop    %ebp
08751210 +0x70:  ret
08751211 +0x71:  nop
08751212 +0x72:  lea    0x0(%esi,%eiz,1),%esi
08751219 +0x79:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::GetSessions @ 0x87511a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetSessions() */

void yaSSL::GetSessions(void)

{
  undefined4 *puVar1;
  
  if (sessionsInstance != (undefined4 *)0x0) {
    return;
  }
  puVar1 = operator_new(0x18,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  RandomPool::RandomPool((RandomPool *)(puVar1 + 3));
  puVar1[5] = 0;
  sessionsInstance = puVar1;
  return;
}
```
