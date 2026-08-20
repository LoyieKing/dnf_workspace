# CreateFortezzaClient

`_ZN5yaSSL20CreateFortezzaClientEv`

`yaSSL::CreateFortezzaClient()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747410  _ZN5yaSSL20CreateFortezzaClientEv
#           yaSSL::CreateFortezzaClient()
# range [0x08747410, 0x0874744a]
08747410 +0x00:  push   %ebp
08747411 +0x01:  mov    %esp,%ebp
08747413 +0x03:  push   %ebx
08747414 +0x04:  sub    $0x14,%esp
08747417 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0874741c +0x0c:  add    $0xc2577c,%ebx
08747422 +0x12:  movb   $0x0,0x4(%esp)
08747427 +0x17:  movl   $0x1bc,(%esp)
0874742e +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747433 +0x23:  mov    -0x40c(%ebx),%edx
08747439 +0x29:  add    $0x8,%edx
0874743c +0x2c:  mov    %edx,(%eax)
0874743e +0x2e:  add    $0x14,%esp
08747441 +0x31:  pop    %ebx
08747442 +0x32:  pop    %ebp
08747443 +0x33:  ret
08747444 +0x34:  lea    0x0(%esi),%esi
0874744a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateFortezzaClient @ 0x8747410

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFortezzaClient() */

void yaSSL::CreateFortezzaClient(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1bc,0);
  *puVar1 = PTR_vtable_0936c78c + 8;
  return;
}
```
