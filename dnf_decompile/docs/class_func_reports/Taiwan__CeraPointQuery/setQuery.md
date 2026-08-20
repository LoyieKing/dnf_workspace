# setQuery

`_ZN6Taiwan14CeraPointQuery8setQueryER5MySQL`

`Taiwan::CeraPointQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CeraPointQuery` | `0x08175224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08175224  _ZN6Taiwan14CeraPointQuery8setQueryER5MySQL
#           Taiwan::CeraPointQuery::setQuery(MySQL&)
# range [0x08175224, 0x081752af]
08175224 +0x00:  push   %ebp
08175225 +0x01:  mov    %esp,%ebp
08175227 +0x03:  push   %edi
08175228 +0x04:  push   %esi
08175229 +0x05:  push   %ebx
0817522a +0x06:  sub    $0x5c,%esp
0817522d +0x09:  mov    0x8(%ebp),%eax
08175230 +0x0c:  movzbl 0x15(%eax),%eax
08175234 +0x10:  movsbl %al,%eax
08175237 +0x13:  mov    %eax,-0x1c(%ebp)
0817523a +0x16:  mov    0x8(%ebp),%eax
0817523d +0x19:  mov    0x8(%eax),%eax
08175240 +0x1c:  mov    %eax,(%esp)
08175243 +0x1f:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
08175248 +0x24:  mov    %eax,%edx
0817524a +0x26:  mov    0x8(%ebp),%eax
0817524d +0x29:  movzbl 0x14(%eax),%eax
08175251 +0x2d:  movsbl %al,%edi
08175254 +0x30:  mov    0x8(%ebp),%eax
08175257 +0x33:  mov    0x10(%eax),%esi
0817525a +0x36:  mov    0x8(%ebp),%eax
0817525d +0x39:  movzbl 0x16(%eax),%eax
08175261 +0x3d:  movsbl %al,%ebx
08175264 +0x40:  mov    0x8(%ebp),%eax
08175267 +0x43:  mov    0x4(%eax),%ecx
0817526a +0x46:  mov    0x8(%ebp),%eax
0817526d +0x49:  mov    (%eax),%eax
0817526f +0x4b:  mov    %eax,-0x2c(%ebp)
08175272 +0x4e:  mov    -0x1c(%ebp),%eax
08175275 +0x51:  mov    %eax,0x20(%esp)
08175279 +0x55:  mov    %edx,0x1c(%esp)
0817527d +0x59:  mov    %edi,0x18(%esp)
08175281 +0x5d:  mov    %esi,0x14(%esp)
08175285 +0x61:  mov    %ebx,0x10(%esp)
08175289 +0x65:  mov    %ecx,0xc(%esp)
0817528d +0x69:  mov    -0x2c(%ebp),%eax
08175290 +0x6c:  mov    %eax,0x8(%esp)
08175294 +0x70:  movl   $"call usp_point_process('%s', '%s', '%c', %u, %d, %d , %d, @out_code)",0x4(%esp)
0817529c +0x78:  mov    0xc(%ebp),%eax
0817529f +0x7b:  mov    %eax,(%esp)
081752a2 +0x7e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081752a7 +0x83:  add    $0x5c,%esp
081752aa +0x86:  pop    %ebx
081752ab +0x87:  pop    %esi
081752ac +0x88:  pop    %edi
081752ad +0x89:  pop    %ebp
081752ae +0x8a:  ret
081752af +0x8b:  nop
```

## 反编译 C

```c
// Taiwan::CeraPointQuery::setQuery @ 0x8175224

/* Taiwan::CeraPointQuery::setQuery(MySQL&) */

void __thiscall Taiwan::CeraPointQuery::setQuery(CeraPointQuery *this,MySQL *param_1)

{
  CeraPointQuery CVar1;
  undefined4 uVar2;
  
  CVar1 = this[0x15];
  uVar2 = StringToNumber(*(char **)(this + 8));
  MySQL::set_query(param_1,
                   "call usp_point_process(\'%s\', \'%s\', \'%c\', %u, %d, %d , %d, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),(int)(char)this[0x16],
                   *(undefined4 *)(this + 0x10),(int)(char)this[0x14],uVar2,(int)(char)CVar1);
  return;
}
```
