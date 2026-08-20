# CreateRSAServerKEA

`_ZN5yaSSL18CreateRSAServerKEAEv`

`yaSSL::CreateRSAServerKEA()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747550  _ZN5yaSSL18CreateRSAServerKEAEv
#           yaSSL::CreateRSAServerKEA()
# range [0x08747550, 0x0874758a]
08747550 +0x00:  push   %ebp
08747551 +0x01:  mov    %esp,%ebp
08747553 +0x03:  push   %ebx
08747554 +0x04:  sub    $0x14,%esp
08747557 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0874755c +0x0c:  add    $0xc2563c,%ebx
08747562 +0x12:  movb   $0x0,0x4(%esp)
08747567 +0x17:  movl   $0x10,(%esp)
0874756e +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747573 +0x23:  mov    -0x328(%ebx),%edx
08747579 +0x29:  add    $0x8,%edx
0874757c +0x2c:  mov    %edx,(%eax)
0874757e +0x2e:  add    $0x14,%esp
08747581 +0x31:  pop    %ebx
08747582 +0x32:  pop    %ebp
08747583 +0x33:  ret
08747584 +0x34:  lea    0x0(%esi),%esi
0874758a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateRSAServerKEA @ 0x8747550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateRSAServerKEA() */

void yaSSL::CreateRSAServerKEA(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10,0);
  *puVar1 = PTR_vtable_0936c870 + 8;
  return;
}
```
