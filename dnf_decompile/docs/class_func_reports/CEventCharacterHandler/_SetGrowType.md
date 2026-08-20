# _SetGrowType

`_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii`

`CEventCharacterHandler::_SetGrowType(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848ea50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848ea50  _ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii
#           CEventCharacterHandler::_SetGrowType(CUser*, int, int)
# range [0x0848ea50, 0x0848eadd]
0848ea50 +0x00:  push   %ebp
0848ea51 +0x01:  mov    %esp,%ebp
0848ea53 +0x03:  sub    $0x28,%esp
0848ea56 +0x06:  movl   $0x0,-0x10(%ebp)
0848ea5d +0x0d:  movl   $0x0,-0xc(%ebp)
0848ea64 +0x14:  cmpl   $0x1,0x10(%ebp)
0848ea68 +0x18:  jne    0848ea72 <+0x22>
0848ea6a +0x1a:  mov    0x14(%ebp),%eax
0848ea6d +0x1d:  mov    %eax,-0x10(%ebp)
0848ea70 +0x20:  jmp    0848eab3 <+0x63>
0848ea72 +0x22:  cmpl   $0x2,0x10(%ebp)
0848ea76 +0x26:  jne    0848eaac <+0x5c>
0848ea78 +0x28:  mov    0xc(%ebp),%eax
0848ea7b +0x2b:  mov    %eax,(%esp)
0848ea7e +0x2e:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0848ea83 +0x33:  test   %al,%al
0848ea85 +0x35:  sete   %al
0848ea88 +0x38:  test   %al,%al
0848ea8a +0x3a:  je     0848ea93 <+0x43>
0848ea8c +0x3c:  mov    $0x0,%eax
0848ea91 +0x41:  jmp    0848eadc <+0x8c>
0848ea93 +0x43:  mov    0xc(%ebp),%eax
0848ea96 +0x46:  mov    %eax,(%esp)
0848ea99 +0x49:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0848ea9e +0x4e:  movsbl %al,%eax
0848eaa1 +0x51:  mov    %eax,-0x10(%ebp)
0848eaa4 +0x54:  mov    0x14(%ebp),%eax
0848eaa7 +0x57:  mov    %eax,-0xc(%ebp)
0848eaaa +0x5a:  jmp    0848eab3 <+0x63>
0848eaac +0x5c:  mov    $0x0,%eax
0848eab1 +0x61:  jmp    0848eadc <+0x8c>
0848eab3 +0x63:  mov    -0xc(%ebp),%eax
0848eab6 +0x66:  mov    %eax,0x8(%esp)
0848eaba +0x6a:  mov    -0x10(%ebp),%eax
0848eabd +0x6d:  mov    %eax,0x4(%esp)
0848eac1 +0x71:  mov    0xc(%ebp),%eax
0848eac4 +0x74:  mov    %eax,(%esp)
0848eac7 +0x77:  call   0867b048 <_ZN5CUser17ChangeGrowType_GMEii>  ; CUser::ChangeGrowType_GM(int, int)
0848eacc +0x7c:  test   %al,%al
0848eace +0x7e:  je     0848ead7 <+0x87>
0848ead0 +0x80:  mov    $0x1,%eax
0848ead5 +0x85:  jmp    0848eadc <+0x8c>
0848ead7 +0x87:  mov    $0x0,%eax
0848eadc +0x8c:  leave
0848eadd +0x8d:  ret
```

## 反编译 C

```c
// CEventCharacterHandler::_SetGrowType @ 0x848ea50

/* CEventCharacterHandler::_SetGrowType(CUser*, int, int) */

bool __thiscall
CEventCharacterHandler::_SetGrowType
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_10 = 0;
  if (param_2 == 1) {
    local_14 = param_3;
  }
  else {
    if (param_2 != 2) {
      return false;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      return false;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_14 = (int)cVar1;
    local_10 = param_3;
  }
  cVar1 = CUser::ChangeGrowType_GM(param_1,local_14,local_10);
  return cVar1 != '\0';
}
```
