# TOD_Layer

`_ZN9TOD_LayerC1Et`

`TOD_Layer::TOD_Layer(unsigned short)`

| 类 | 地址 |
|---|---|
| `TOD_Layer` | `0x085fe7b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe7b4  _ZN9TOD_LayerC1Et
#           TOD_Layer::TOD_Layer(unsigned short)
# range [0x085fe7b4, 0x085fe823]
085fe7b4 +0x00:  push   %ebp
085fe7b5 +0x01:  mov    %esp,%ebp
085fe7b7 +0x03:  push   %ebx
085fe7b8 +0x04:  sub    $0x34,%esp
085fe7bb +0x07:  mov    0xc(%ebp),%eax
085fe7be +0x0a:  mov    %ax,-0x1c(%ebp)
085fe7c2 +0x0e:  mov    0x8(%ebp),%eax
085fe7c5 +0x11:  movzwl -0x1c(%ebp),%edx
085fe7c9 +0x15:  mov    %dx,(%eax)
085fe7cc +0x18:  mov    0x8(%ebp),%eax
085fe7cf +0x1b:  movzwl (%eax),%eax
085fe7d2 +0x1e:  cmp    $0x64,%ax
085fe7d6 +0x22:  jbe    085fe81e <+0x6a>
085fe7d8 +0x24:  movzwl -0x1c(%ebp),%ebx
085fe7dc +0x28:  movl   $0x5,0xc(%esp)
085fe7e4 +0x30:  movl   $0x10,0x8(%esp)
085fe7ec +0x38:  movl   $&_ZZN9TOD_LayerC1EtE19__PRETTY_FUNCTION__,0x4(%esp)
085fe7f4 +0x40:  lea    -0x18(%ebp),%eax
085fe7f7 +0x43:  mov    %eax,(%esp)
085fe7fa +0x46:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085fe7ff +0x4b:  mov    %ebx,0x8(%esp)
085fe803 +0x4f:  movl   $"@TOD: invalid layer setting : %d",0x4(%esp)
085fe80b +0x57:  lea    -0x18(%ebp),%eax
085fe80e +0x5a:  mov    %eax,(%esp)
085fe811 +0x5d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085fe816 +0x62:  mov    0x8(%ebp),%eax
085fe819 +0x65:  movw   $0x1,(%eax)
085fe81e +0x6a:  add    $0x34,%esp
085fe821 +0x6d:  pop    %ebx
085fe822 +0x6e:  pop    %ebp
085fe823 +0x6f:  ret
```

## 反编译 C

```c
// TOD_Layer::TOD_Layer @ 0x85fe7b4

/* TOD_Layer::TOD_Layer(unsigned short) */

void __thiscall TOD_Layer::TOD_Layer(TOD_Layer *this,ushort param_1)

{
  cMyTrace local_1c [20];
  
  *(ushort *)this = param_1;
  if (100 < *(ushort *)this) {
    cMyTrace::cMyTrace(local_1c,"TOD_Layer::TOD_Layer(short unsigned int)",0x10,5);
    cMyTrace::operator()(local_1c,"@TOD: invalid layer setting : %d",(uint)param_1);
    *(undefined2 *)this = 1;
  }
  return;
}
```
