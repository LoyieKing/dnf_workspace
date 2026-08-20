# RecvInfoFromWeb

`_ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj`

`WongWork::CWebEvent::RecvInfoFromWeb(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c11d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c11d0  _ZN8WongWork9CWebEvent15RecvInfoFromWebEjjjjjj
#           WongWork::CWebEvent::RecvInfoFromWeb(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x086c11d0, 0x086c121d]
086c11d0 +0x00:  push   %ebp
086c11d1 +0x01:  mov    %esp,%ebp
086c11d3 +0x03:  sub    $0x28,%esp
086c11d6 +0x06:  cmpl   $0x3e7,0x10(%ebp)
086c11dd +0x0d:  jne    086c11e6 <+0x16>
086c11df +0x0f:  mov    $0x0,%eax
086c11e4 +0x14:  jmp    086c121c <+0x4c>
086c11e6 +0x16:  movl   $0x0,0x18(%esp)
086c11ee +0x1e:  mov    0x1c(%ebp),%eax
086c11f1 +0x21:  mov    %eax,0x14(%esp)
086c11f5 +0x25:  mov    0x18(%ebp),%eax
086c11f8 +0x28:  mov    %eax,0x10(%esp)
086c11fc +0x2c:  mov    0x14(%ebp),%eax
086c11ff +0x2f:  mov    %eax,0xc(%esp)
086c1203 +0x33:  mov    0x10(%ebp),%eax
086c1206 +0x36:  mov    %eax,0x8(%esp)
086c120a +0x3a:  mov    0xc(%ebp),%eax
086c120d +0x3d:  mov    %eax,0x4(%esp)
086c1211 +0x41:  mov    0x8(%ebp),%eax
086c1214 +0x44:  mov    %eax,(%esp)
086c1217 +0x47:  call   086c1910 <_ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb>  ; WongWork::CWebEvent::ReqSaveEventItem(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool)
086c121c +0x4c:  leave
086c121d +0x4d:  ret
```

## 反编译 C

```c
// WongWork::CWebEvent::RecvInfoFromWeb @ 0x86c11d0

/* WongWork::CWebEvent::RecvInfoFromWeb(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

undefined4
WongWork::CWebEvent::RecvInfoFromWeb
          (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  
  if (param_3 == 999) {
    uVar1 = 0;
  }
  else {
    uVar1 = ReqSaveEventItem(param_1,param_2,param_3,param_4,param_5,param_6,false);
  }
  return uVar1;
}
```
