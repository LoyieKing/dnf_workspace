# CheckAlreadyFCComboEventItem

`_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji`

`WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventFCCombo` | `0x083fb883` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb883  _ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji
#           WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(unsigned int, int)
# range [0x083fb883, 0x083fb928]
083fb883 +0x00:  push   %ebp
083fb884 +0x01:  mov    %esp,%ebp
083fb886 +0x03:  sub    $0x28,%esp
083fb889 +0x06:  call   0844dc7c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x892>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x892
083fb88e +0x0b:  mov    %eax,-0xc(%ebp)
083fb891 +0x0e:  movl   $0x0,0x4(%esp)
083fb899 +0x16:  mov    0x8(%ebp),%eax
083fb89c +0x19:  mov    %eax,(%esp)
083fb89f +0x1c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb8a4 +0x21:  mov    %eax,0x8(%esp)
083fb8a8 +0x25:  movl   $"seLect item_check from event_combo_entry where id=%s",0x4(%esp)
083fb8b0 +0x2d:  mov    -0xc(%ebp),%eax
083fb8b3 +0x30:  mov    %eax,(%esp)
083fb8b6 +0x33:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb8bb +0x38:  movl   $0x1,0x4(%esp)
083fb8c3 +0x40:  mov    -0xc(%ebp),%eax
083fb8c6 +0x43:  mov    %eax,(%esp)
083fb8c9 +0x46:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb8ce +0x4b:  xor    $0x1,%eax
083fb8d1 +0x4e:  test   %al,%al
083fb8d3 +0x50:  je     083fb8dc <+0x59>
083fb8d5 +0x52:  mov    $0x0,%eax
083fb8da +0x57:  jmp    083fb927 <+0xa4>
083fb8dc +0x59:  movl   $0x0,-0x10(%ebp)
083fb8e3 +0x60:  lea    -0x10(%ebp),%eax
083fb8e6 +0x63:  mov    %eax,0x8(%esp)
083fb8ea +0x67:  movl   $0x0,0x4(%esp)
083fb8f2 +0x6f:  mov    -0xc(%ebp),%eax
083fb8f5 +0x72:  mov    %eax,(%esp)
083fb8f8 +0x75:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb8fd +0x7a:  xor    $0x1,%eax
083fb900 +0x7d:  test   %al,%al
083fb902 +0x7f:  jne    083fb90b <+0x88>
083fb904 +0x81:  mov    -0x10(%ebp),%eax
083fb907 +0x84:  test   %eax,%eax
083fb909 +0x86:  jne    083fb912 <+0x8f>
083fb90b +0x88:  mov    $0x1,%eax
083fb910 +0x8d:  jmp    083fb917 <+0x94>
083fb912 +0x8f:  mov    $0x0,%eax
083fb917 +0x94:  test   %al,%al
083fb919 +0x96:  je     083fb922 <+0x9f>
083fb91b +0x98:  mov    $0x0,%eax
083fb920 +0x9d:  jmp    083fb927 <+0xa4>
083fb922 +0x9f:  mov    $0x1,%eax
083fb927 +0xa4:  leave
083fb928 +0xa5:  ret
```

## 反编译 C

```c
// WongWork::EventFCCombo::CheckAlreadyFCComboEventItem @ 0x83fb883

/* WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(unsigned int, int) */

undefined4 WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)GetDBHandle();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect item_check from event_combo_entry where id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
