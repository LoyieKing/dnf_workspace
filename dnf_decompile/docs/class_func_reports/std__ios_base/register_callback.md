# register_callback

`_ZNSt8ios_base17register_callbackEPFvNS_5eventERS_iEi`

`std::ios_base::register_callback(void (*)(std::ios_base::event, std::ios_base&, int), int)`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08727030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08727030  _ZNSt8ios_base17register_callbackEPFvNS_5eventERS_iEi
#           std::ios_base::register_callback(void (*)(std::ios_base::event, std::ios_base&, int), int)
# range [0x08727030, 0x0872706f]
08727030 +0x00:  push   %ebp
08727031 +0x01:  mov    %esp,%ebp
08727033 +0x03:  push   %ebx
08727034 +0x04:  sub    $0x14,%esp
08727037 +0x07:  mov    0x8(%ebp),%ebx
0872703a +0x0a:  movl   $0x10,(%esp)
08727041 +0x11:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08727046 +0x16:  mov    0x18(%ebx),%edx
08727049 +0x19:  mov    %edx,(%eax)
0872704b +0x1b:  mov    0xc(%ebp),%edx
0872704e +0x1e:  mov    %eax,0x18(%ebx)
08727051 +0x21:  mov    %edx,0x4(%eax)
08727054 +0x24:  mov    0x10(%ebp),%edx
08727057 +0x27:  movl   $0x0,0xc(%eax)
0872705e +0x2e:  mov    %edx,0x8(%eax)
08727061 +0x31:  add    $0x14,%esp
08727064 +0x34:  pop    %ebx
08727065 +0x35:  pop    %ebp
08727066 +0x36:  ret
08727067 +0x37:  nop
08727068 +0x38:  nop
08727069 +0x39:  nop
0872706a +0x3a:  nop
0872706b +0x3b:  nop
0872706c +0x3c:  nop
0872706d +0x3d:  nop
0872706e +0x3e:  nop
0872706f +0x3f:  nop
```

## 反编译 C

```c
// std::ios_base::register_callback @ 0x8727030

/* std::ios_base::register_callback(void (*)(std::ios_base::event, std::ios_base&, int), int) */

void __thiscall
std::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 **)(this + 0x18) = puVar1;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = param_2;
  return;
}
```
