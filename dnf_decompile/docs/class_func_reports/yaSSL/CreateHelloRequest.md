# CreateHelloRequest

`_ZN5yaSSL18CreateHelloRequestEv`

`yaSSL::CreateHelloRequest()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747710  _ZN5yaSSL18CreateHelloRequestEv
#           yaSSL::CreateHelloRequest()
# range [0x08747710, 0x0874774a]
08747710 +0x00:  push   %ebp
08747711 +0x01:  mov    %esp,%ebp
08747713 +0x03:  push   %ebx
08747714 +0x04:  sub    $0x14,%esp
08747717 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0874771c +0x0c:  add    $0xc2547c,%ebx
08747722 +0x12:  movb   $0x0,0x4(%esp)
08747727 +0x17:  movl   $0x8,(%esp)
0874772e +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747733 +0x23:  mov    -0x438(%ebx),%edx
08747739 +0x29:  add    $0x8,%edx
0874773c +0x2c:  mov    %edx,(%eax)
0874773e +0x2e:  add    $0x14,%esp
08747741 +0x31:  pop    %ebx
08747742 +0x32:  pop    %ebp
08747743 +0x33:  ret
08747744 +0x34:  lea    0x0(%esi),%esi
0874774a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateHelloRequest @ 0x8747710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateHelloRequest() */

void yaSSL::CreateHelloRequest(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8,0);
  *puVar1 = PTR_vtable_0936c760 + 8;
  return;
}
```
