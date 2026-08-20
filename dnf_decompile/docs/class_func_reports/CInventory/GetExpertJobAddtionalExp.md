# GetExpertJobAddtionalExp

`_ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE`

`CInventory::GetExpertJobAddtionalExp(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertJobAdditionalExp&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cc46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cc46  _ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE
#           CInventory::GetExpertJobAddtionalExp(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertJobAdditionalExp&) const
# range [0x0850cc46, 0x0850cd1b]
0850cc46 +0x00:  push   %ebp
0850cc47 +0x01:  mov    %esp,%ebp
0850cc49 +0x03:  push   %ebx
0850cc4a +0x04:  sub    $0x24,%esp
0850cc4d +0x07:  cmpl   $0x0,0xc(%ebp)
0850cc51 +0x0b:  je     0850cd14 <+0xce>
0850cc57 +0x11:  movl   $0xa,-0x10(%ebp)
0850cc5e +0x18:  jmp    0850cd03 <+0xbd>
0850cc63 +0x1d:  mov    -0x10(%ebp),%eax
0850cc66 +0x20:  mov    0x8(%ebp),%edx
0850cc69 +0x23:  imul   $0x3d,%eax,%eax
0850cc6c +0x26:  lea    (%edx,%eax,1),%eax
0850cc6f +0x29:  add    $0x10,%eax
0850cc72 +0x2c:  mov    0xe(%eax),%eax
0850cc75 +0x2f:  test   %eax,%eax
0850cc77 +0x31:  je     0850ccff <+0xb9>
0850cc7d +0x37:  mov    -0x10(%ebp),%eax
0850cc80 +0x3a:  mov    0x8(%ebp),%edx
0850cc83 +0x3d:  imul   $0x3d,%eax,%eax
0850cc86 +0x40:  lea    (%edx,%eax,1),%eax
0850cc89 +0x43:  add    $0x10,%eax
0850cc8c +0x46:  mov    0xe(%eax),%eax
0850cc8f +0x49:  mov    %eax,%ebx
0850cc91 +0x4b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850cc96 +0x50:  mov    %ebx,0x4(%esp)
0850cc9a +0x54:  mov    %eax,(%esp)
0850cc9d +0x57:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850cca2 +0x5c:  mov    %eax,-0xc(%ebp)
0850cca5 +0x5f:  mov    0x10(%ebp),%eax
0850cca8 +0x62:  mov    %eax,0x8(%esp)
0850ccac +0x66:  mov    0xc(%ebp),%eax
0850ccaf +0x69:  mov    %eax,0x4(%esp)
0850ccb3 +0x6d:  mov    -0xc(%ebp),%eax
0850ccb6 +0x70:  mov    %eax,(%esp)
0850ccb9 +0x73:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850ccbe +0x78:  test   %al,%al
0850ccc0 +0x7a:  je     0850ccff <+0xb9>
0850ccc2 +0x7c:  lea    -0x18(%ebp),%eax
0850ccc5 +0x7f:  mov    %eax,(%esp)
0850ccc8 +0x82:  call   0849f34c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x17d>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x17d
0850cccd +0x87:  lea    -0x18(%ebp),%eax
0850ccd0 +0x8a:  mov    %eax,0x4(%esp)
0850ccd4 +0x8e:  mov    -0xc(%ebp),%eax
0850ccd7 +0x91:  mov    %eax,(%esp)
0850ccda +0x94:  call   0850d30e <_GLOBAL__I_g_emptySlot+0x243>  ; global constructors keyed to g_emptySlot+0x243
0850ccdf +0x99:  mov    0x14(%ebp),%eax
0850cce2 +0x9c:  flds   (%eax)
0850cce4 +0x9e:  flds   -0x18(%ebp)
0850cce7 +0xa1:  faddp  %st,%st(1)
0850cce9 +0xa3:  mov    0x14(%ebp),%eax
0850ccec +0xa6:  fstps  (%eax)
0850ccee +0xa8:  mov    0x14(%ebp),%eax
0850ccf1 +0xab:  mov    0x4(%eax),%edx
0850ccf4 +0xae:  mov    -0x14(%ebp),%eax
0850ccf7 +0xb1:  add    %eax,%edx
0850ccf9 +0xb3:  mov    0x14(%ebp),%eax
0850ccfc +0xb6:  mov    %edx,0x4(%eax)
0850ccff +0xb9:  addl   $0x1,-0x10(%ebp)
0850cd03 +0xbd:  cmpl   $0x15,-0x10(%ebp)
0850cd07 +0xc1:  setle  %al
0850cd0a +0xc4:  test   %al,%al
0850cd0c +0xc6:  jne    0850cc63 <+0x1d>
0850cd12 +0xcc:  jmp    0850cd15 <+0xcf>
0850cd14 +0xce:  nop
0850cd15 +0xcf:  add    $0x24,%esp
0850cd18 +0xd2:  pop    %ebx
0850cd19 +0xd3:  pop    %ebp
0850cd1a +0xd4:  ret
0850cd1b +0xd5:  nop
```

## 反编译 C

```c
// CInventory::GetExpertJobAddtionalExp @ 0x850cc46

/* CInventory::GetExpertJobAddtionalExp(ENUM_EXPERT_JOB_TYPE, int,
   STItemScript::SEXPERTJOB::stExpertJobAdditionalExp&) const */

void __thiscall
CInventory::GetExpertJobAddtionalExp(CInventory *this,int param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  float local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  if (param_2 != 0) {
    for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
      if (*(int *)(this + local_14 * 0x3d + 0x1e) != 0) {
        iVar1 = *(int *)(this + local_14 * 0x3d + 0x1e);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
        cVar2 = CItem::isExpertJobUsable(local_10,param_2,param_3);
        if (cVar2 != '\0') {
          STItemScript::SEXPERTJOB::stExpertJobAdditionalExp::stExpertJobAdditionalExp
                    ((stExpertJobAdditionalExp *)&local_1c);
          CItem::GetExpertJobAdditionalExp(local_10,(stExpertJobAdditionalExp *)&local_1c);
          *param_4 = local_1c + *param_4;
          param_4[1] = (float)((int)param_4[1] + local_18);
        }
      }
    }
  }
  return;
}
```
