# ARAD__DATABASE__CREATE_QUERY

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## arad_sp_charater_name_check

```asm
// === 0818ac54 ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check  [0x0818ac54-0x818ad8a] ===
 818ac54:	55                   	push   %ebp
 818ac55:	89 e5                	mov    %esp,%ebp
 818ac57:	83 ec 38             	sub    $0x38,%esp
 818ac5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ac5d:	83 c0 04             	add    $0x4,%eax
 818ac60:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818ac64:	8b 45 10             	mov    0x10(%ebp),%eax
 818ac67:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ac6b:	c7 44 24 04 64 1e b9 	movl   $0x8b91e64,0x4(%esp)
 818ac72:	08 
 818ac73:	8b 45 08             	mov    0x8(%ebp),%eax
 818ac76:	89 04 24             	mov    %eax,(%esp)
 818ac79:	e8 fa 99 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818ac7e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818ac81:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818ac85:	74 4b                	je     818acd2 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x7e>
 818ac87:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ac8a:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 818ac91:	00 00 00 
 818ac94:	c7 44 24 14 a2 1e b9 	movl   $0x8b91ea2,0x14(%esp)
 818ac9b:	08 
 818ac9c:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818aca3:	08 
 818aca4:	c7 44 24 0c 1f 00 00 	movl   $0x1f,0xc(%esp)
 818acab:	00 
 818acac:	c7 44 24 08 e0 41 b9 	movl   $0x8b941e0,0x8(%esp)
 818acb3:	08 
 818acb4:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818acbb:	08 
 818acbc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818acc3:	e8 42 8f 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818acc8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818accd:	e9 b7 00 00 00       	jmp    818ad89 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x135>
 818acd2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 818acd9:	8b 45 08             	mov    0x8(%ebp),%eax
 818acdc:	89 04 24             	mov    %eax,(%esp)
 818acdf:	e8 88 76 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818ace4:	85 c0                	test   %eax,%eax
 818ace6:	0f 95 c0             	setne  %al
 818ace9:	84 c0                	test   %al,%al
 818aceb:	0f 84 93 00 00 00    	je     818ad84 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x130>
 818acf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 818acf4:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 818acfb:	00 00 00 
 818acfe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 818ad01:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ad05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818ad0c:	00 
 818ad0d:	8b 45 08             	mov    0x8(%ebp),%eax
 818ad10:	89 04 24             	mov    %eax,(%esp)
 818ad13:	e8 14 bc f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818ad18:	83 f0 01             	xor    $0x1,%eax
 818ad1b:	84 c0                	test   %al,%al
 818ad1d:	74 3b                	je     818ad5a <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x106>
 818ad1f:	c7 44 24 14 d0 1e b9 	movl   $0x8b91ed0,0x14(%esp)
 818ad26:	08 
 818ad27:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818ad2e:	08 
 818ad2f:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 818ad36:	00 
 818ad37:	c7 44 24 08 e0 41 b9 	movl   $0x8b941e0,0x8(%esp)
 818ad3e:	08 
 818ad3f:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818ad46:	08 
 818ad47:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ad4e:	e8 b7 8e 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ad53:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ad58:	eb 2f                	jmp    818ad89 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x135>
 818ad5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ad5d:	85 c0                	test   %eax,%eax
 818ad5f:	74 0f                	je     818ad70 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x11c>
 818ad61:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ad64:	c7 80 44 53 00 00 03 	movl   $0x3,0x5344(%eax)
 818ad6b:	00 00 00 
 818ad6e:	eb 0d                	jmp    818ad7d <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x129>
 818ad70:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ad73:	c7 80 44 53 00 00 01 	movl   $0x1,0x5344(%eax)
 818ad7a:	00 00 00 
 818ad7d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ad82:	eb 05                	jmp    818ad89 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x135>
 818ad84:	b8 00 00 00 00       	mov    $0x0,%eax
 818ad89:	c9                   	leave
 818ad8a:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check @ 0x818ac54

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char
   const*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  local_10 = MySQL::select(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'"
                           ,param_3,param_2 + 4);
  if (local_10 == 0) {
    local_14 = 0;
    iVar3 = MySQL::get_n_rows(param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x5344) = 2;
      cVar1 = MySQL::get_int(param_1,0,&local_14);
      if (cVar1 == '\x01') {
        if (local_14 == 0) {
          *(undefined4 *)(param_2 + 0x5344) = 1;
        }
        else {
          *(undefined4 *)(param_2 + 0x5344) = 3;
        }
        uVar2 = 0xffffffff;
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, const char*)"
                   ,0x28,"%s","Parsing Error of Selected Field");
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x5344) = 2;
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, const char*)"
               ,0x1f,"%s","select error");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_charac_dungeon

```asm
// === 0818b642 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon  [0x0818b642-0x818b68b] ===
 818b642:	55                   	push   %ebp
 818b643:	89 e5                	mov    %esp,%ebp
 818b645:	83 ec 28             	sub    $0x28,%esp
 818b648:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818b64f:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b652:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b658:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818b65b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b65e:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b662:	c7 44 24 04 18 23 b9 	movl   $0x8b92318,0x4(%esp)
 818b669:	08 
 818b66a:	8b 45 08             	mov    0x8(%ebp),%eax
 818b66d:	89 04 24             	mov    %eax,(%esp)
 818b670:	e8 39 90 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b675:	85 c0                	test   %eax,%eax
 818b677:	0f 95 c0             	setne  %al
 818b67a:	84 c0                	test   %al,%al
 818b67c:	74 07                	je     818b685 <_ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC+0x43>
 818b67e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b683:	eb 05                	jmp    818b68a <_ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC+0x48>
 818b685:	b8 00 00 00 00       	mov    $0x0,%eax
 818b68a:	c9                   	leave
 818b68b:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon @ 0x818b642

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,"inSert into charac_dungeon(charac_no, dungeon) values(%d, \'\')",
                        *(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_charac_quest

```asm
// === 0818b68c ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest  [0x0818b68c-0x818b6c8] ===
 818b68c:	55                   	push   %ebp
 818b68d:	89 e5                	mov    %esp,%ebp
 818b68f:	83 ec 18             	sub    $0x18,%esp
 818b692:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b695:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b69b:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b69f:	c7 44 24 04 58 23 b9 	movl   $0x8b92358,0x4(%esp)
 818b6a6:	08 
 818b6a7:	8b 45 08             	mov    0x8(%ebp),%eax
 818b6aa:	89 04 24             	mov    %eax,(%esp)
 818b6ad:	e8 fc 8f 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b6b2:	85 c0                	test   %eax,%eax
 818b6b4:	0f 95 c0             	setne  %al
 818b6b7:	84 c0                	test   %al,%al
 818b6b9:	74 07                	je     818b6c2 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_charac_questEP5MySQLP17SIG_CREATE_CHARAC+0x36>
 818b6bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b6c0:	eb 05                	jmp    818b6c7 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_charac_questEP5MySQLP17SIG_CREATE_CHARAC+0x3b>
 818b6c2:	b8 00 00 00 00       	mov    $0x0,%eax
 818b6c7:	c9                   	leave
 818b6c8:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest @ 0x818b68c

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_quest(charac_no,quest_10,quest_15,quest_20,quest_30,quest_40,quest_50, quest_60,quest_70,quest_etc,play_1,play_1_trigger,play_2,play_2_trigger,play_3,play_3_trigger,play_4,play_4_trigger,play_5,play_5_trigger,play_6,play_6_trigger,play_7,play_7_trigger,play_8,play_8_trigger,play_9,play_9_trigger,play_10,play_10_trigger) values(%d,\'\',\'\',\'\',\'\',\'\',\'\',\'\',\'\',\'\',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)"
                        ,*(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_charac_stat

```asm
// === 0818b26d ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat  [0x0818b26d-0x818b2b6] ===
 818b26d:	55                   	push   %ebp
 818b26e:	89 e5                	mov    %esp,%ebp
 818b270:	83 ec 18             	sub    $0x18,%esp
 818b273:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b276:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b27c:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b280:	c7 44 24 04 08 21 b9 	movl   $0x8b92108,0x4(%esp)
 818b287:	08 
 818b288:	8b 45 08             	mov    0x8(%ebp),%eax
 818b28b:	89 04 24             	mov    %eax,(%esp)
 818b28e:	e8 1b 94 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b293:	85 c0                	test   %eax,%eax
 818b295:	0f 95 c0             	setne  %al
 818b298:	84 c0                	test   %al,%al
 818b29a:	74 14                	je     818b2b0 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC+0x43>
 818b29c:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b29f:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 818b2a6:	00 00 00 
 818b2a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b2ae:	eb 05                	jmp    818b2b5 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC+0x48>
 818b2b0:	b8 00 00 00 00       	mov    $0x0,%eax
 818b2b5:	c9                   	leave
 818b2b6:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat @ 0x818b26d

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_stat  (charac_no,HP, forbidden_to_play, forbidden_due_to)  values(%d,100,0,0) "
                        ,*(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x5344) = 2;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_character

```asm
// === 0818af9a ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character  [0x0818af9a-0x818b26c] ===
 818af9a:	55                   	push   %ebp
 818af9b:	89 e5                	mov    %esp,%ebp
 818af9d:	57                   	push   %edi
 818af9e:	56                   	push   %esi
 818af9f:	53                   	push   %ebx
 818afa0:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 818afa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 818afa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 818afad:	8b 45 08             	mov    0x8(%ebp),%eax
 818afb0:	89 04 24             	mov    %eax,(%esp)
 818afb3:	e8 ea fe ff ff       	call   818aea2 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC>
 818afb8:	85 c0                	test   %eax,%eax
 818afba:	0f 95 c0             	setne  %al
 818afbd:	84 c0                	test   %al,%al
 818afbf:	74 0a                	je     818afcb <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x31>
 818afc1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818afc6:	e9 97 02 00 00       	jmp    818b262 <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x2c8>
 818afcb:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 818afd2:	e8 aa 11 f4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 818afd7:	8d 50 68             	lea    0x68(%eax),%edx
 818afda:	8d 45 e0             	lea    -0x20(%ebp),%eax
 818afdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 818afe1:	89 14 24             	mov    %edx,(%esp)
 818afe4:	e8 99 1f f6 ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 818afe9:	83 c0 42             	add    $0x42,%eax
 818afec:	89 44 24 08          	mov    %eax,0x8(%esp)
 818aff0:	8b 45 0c             	mov    0xc(%ebp),%eax
 818aff3:	89 44 24 04          	mov    %eax,0x4(%esp)
 818aff7:	8b 45 08             	mov    0x8(%ebp),%eax
 818affa:	89 04 24             	mov    %eax,(%esp)
 818affd:	e8 52 fc ff ff       	call   818ac54 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc>
 818b002:	85 c0                	test   %eax,%eax
 818b004:	0f 95 c0             	setne  %al
 818b007:	84 c0                	test   %al,%al
 818b009:	74 0a                	je     818b015 <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x7b>
 818b00b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b010:	e9 4d 02 00 00       	jmp    818b262 <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x2c8>
 818b015:	8d 5d a4             	lea    -0x5c(%ebp),%ebx
 818b018:	b8 00 00 00 00       	mov    $0x0,%eax
 818b01d:	ba 0f 00 00 00       	mov    $0xf,%edx
 818b022:	89 df                	mov    %ebx,%edi
 818b024:	89 d1                	mov    %edx,%ecx
 818b026:	f3 ab                	rep stos %eax,%es:(%edi)
 818b028:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b02b:	83 c0 04             	add    $0x4,%eax
 818b02e:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b032:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 818b035:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b039:	8b 45 08             	mov    0x8(%ebp),%eax
 818b03c:	89 04 24             	mov    %eax,(%esp)
 818b03f:	e8 66 98 26 00       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 818b044:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b047:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 818b04b:	0f be c0             	movsbl %al,%eax
 818b04e:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 818b054:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 818b059:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 818b05f:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b062:	8b 40 74             	mov    0x74(%eax),%eax
 818b065:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 818b06b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b06e:	0f b7 40 72          	movzwl 0x72(%eax),%eax
 818b072:	98                   	cwtl
 818b073:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 818b079:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b07c:	0f b7 40 70          	movzwl 0x70(%eax),%eax
 818b080:	98                   	cwtl
 818b081:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 818b087:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b08a:	0f b7 40 6e          	movzwl 0x6e(%eax),%eax
 818b08e:	0f b7 c0             	movzwl %ax,%eax
 818b091:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 818b097:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b09a:	0f b7 40 6c          	movzwl 0x6c(%eax),%eax
 818b09e:	0f b7 c0             	movzwl %ax,%eax
 818b0a1:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 818b0a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b0aa:	8b 40 68             	mov    0x68(%eax),%eax
 818b0ad:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 818b0b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b0b6:	0f b7 40 66          	movzwl 0x66(%eax),%eax
 818b0ba:	98                   	cwtl
 818b0bb:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 818b0c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b0c4:	0f b7 40 64          	movzwl 0x64(%eax),%eax
 818b0c8:	98                   	cwtl
 818b0c9:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 818b0cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b0d2:	8b 40 60             	mov    0x60(%eax),%eax
 818b0d5:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 818b0db:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b0de:	83 c0 3e             	add    $0x3e,%eax
 818b0e1:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 818b0e8:	00 
 818b0e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b0ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818b0f4:	00 
 818b0f5:	8b 45 08             	mov    0x8(%ebp),%eax
 818b0f8:	89 04 24             	mov    %eax,(%esp)
 818b0fb:	e8 2a 94 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b100:	89 45 80             	mov    %eax,-0x80(%ebp)
 818b103:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b106:	83 c0 36             	add    $0x36,%eax
 818b109:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 818b110:	00 
 818b111:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b115:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b11c:	00 
 818b11d:	8b 45 08             	mov    0x8(%ebp),%eax
 818b120:	89 04 24             	mov    %eax,(%esp)
 818b123:	e8 02 94 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b128:	89 45 84             	mov    %eax,-0x7c(%ebp)
 818b12b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b12e:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 818b132:	0f b7 c0             	movzwl %ax,%eax
 818b135:	89 45 88             	mov    %eax,-0x78(%ebp)
 818b138:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b13b:	0f b7 40 32          	movzwl 0x32(%eax),%eax
 818b13f:	0f b7 c0             	movzwl %ax,%eax
 818b142:	89 45 8c             	mov    %eax,-0x74(%ebp)
 818b145:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b148:	0f b7 40 30          	movzwl 0x30(%eax),%eax
 818b14c:	0f b7 c0             	movzwl %ax,%eax
 818b14f:	89 45 90             	mov    %eax,-0x70(%ebp)
 818b152:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b155:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 818b159:	0f b7 c0             	movzwl %ax,%eax
 818b15c:	89 45 94             	mov    %eax,-0x6c(%ebp)
 818b15f:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b162:	8b 78 2a             	mov    0x2a(%eax),%edi
 818b165:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b168:	8b 70 26             	mov    0x26(%eax),%esi
 818b16b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b16e:	0f b6 80 4c 53 00 00 	movzbl 0x534c(%eax),%eax
 818b175:	0f be d8             	movsbl %al,%ebx
 818b178:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b17b:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 818b17f:	0f be c8             	movsbl %al,%ecx
 818b182:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b185:	8b 10                	mov    (%eax),%edx
 818b187:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 818b18d:	89 44 24 60          	mov    %eax,0x60(%esp)
 818b191:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 818b197:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 818b19b:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 818b1a1:	89 44 24 58          	mov    %eax,0x58(%esp)
 818b1a5:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 818b1ab:	89 44 24 54          	mov    %eax,0x54(%esp)
 818b1af:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 818b1b5:	89 44 24 50          	mov    %eax,0x50(%esp)
 818b1b9:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 818b1bf:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 818b1c3:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 818b1c9:	89 44 24 48          	mov    %eax,0x48(%esp)
 818b1cd:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 818b1d3:	89 44 24 44          	mov    %eax,0x44(%esp)
 818b1d7:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 818b1dd:	89 44 24 40          	mov    %eax,0x40(%esp)
 818b1e1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 818b1e7:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 818b1eb:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 818b1f1:	89 44 24 38          	mov    %eax,0x38(%esp)
 818b1f5:	8b 45 80             	mov    -0x80(%ebp),%eax
 818b1f8:	89 44 24 34          	mov    %eax,0x34(%esp)
 818b1fc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 818b1ff:	89 44 24 30          	mov    %eax,0x30(%esp)
 818b203:	8b 45 88             	mov    -0x78(%ebp),%eax
 818b206:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 818b20a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 818b20d:	89 44 24 28          	mov    %eax,0x28(%esp)
 818b211:	8b 45 90             	mov    -0x70(%ebp),%eax
 818b214:	89 44 24 24          	mov    %eax,0x24(%esp)
 818b218:	8b 45 94             	mov    -0x6c(%ebp),%eax
 818b21b:	89 44 24 20          	mov    %eax,0x20(%esp)
 818b21f:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 818b223:	89 74 24 18          	mov    %esi,0x18(%esp)
 818b227:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 818b22b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 818b22f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 818b232:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b236:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b23a:	c7 44 24 04 9c 1f b9 	movl   $0x8b91f9c,0x4(%esp)
 818b241:	08 
 818b242:	8b 45 08             	mov    0x8(%ebp),%eax
 818b245:	89 04 24             	mov    %eax,(%esp)
 818b248:	e8 61 94 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b24d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 818b250:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 818b254:	74 07                	je     818b25d <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x2c3>
 818b256:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b25b:	eb 05                	jmp    818b262 <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC+0x2c8>
 818b25d:	b8 00 00 00 00       	mov    $0x0,%eax
 818b262:	81 c4 1c 01 00 00    	add    $0x11c,%esp
 818b268:	5b                   	pop    %ebx
 818b269:	5e                   	pop    %esi
 818b26a:	5f                   	pop    %edi
 818b26b:	5d                   	pop    %ebp
 818b26c:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character @ 0x818af9a

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  SIG_CREATE_CHARAC SVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  byte bVar16;
  char local_60 [60];
  undefined4 local_24 [5];
  
  bVar16 = 0;
  iVar11 = arad_sp_create_character_check(param_1,param_2);
  if (iVar11 == 0) {
    local_24[0] = 2;
    iVar11 = G_CEnvironment();
    iVar11 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar11 + 0x68),(ENUM_DB_HANDLE_IDX *)local_24);
    iVar11 = arad_sp_charater_name_check(param_1,param_2,(char *)(iVar11 + 0x42));
    if (iVar11 == 0) {
      pcVar15 = local_60;
      for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + ((uint)bVar16 * -2 + 1) * 4;
      }
      MySQL::escape_string(param_1,local_60,(char *)(param_2 + 4));
      uVar10 = DEFAULT_MAX_FATIGUE;
      SVar1 = param_2[0x25];
      uVar12 = *(undefined4 *)(param_2 + 0x74);
      sVar2 = *(short *)(param_2 + 0x72);
      sVar3 = *(short *)(param_2 + 0x70);
      uVar4 = *(ushort *)(param_2 + 0x6e);
      uVar5 = *(ushort *)(param_2 + 0x6c);
      uVar8 = *(undefined4 *)(param_2 + 0x68);
      sVar6 = *(short *)(param_2 + 0x66);
      sVar7 = *(short *)(param_2 + 100);
      uVar9 = *(undefined4 *)(param_2 + 0x60);
      uVar13 = MySQL::blob_to_str(param_1,1,param_2 + 0x3e,0x22);
      uVar14 = MySQL::blob_to_str(param_1,0,param_2 + 0x36,8);
      iVar11 = MySQL::insert(param_1,
                             "inSert into charac_info ( m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job) values(%u,\'%s\',%d,%d,%d,%u,%d,%d,%d,%d,\'%s\',\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)"
                             ,*(undefined4 *)param_2,local_60,(int)(char)param_2[0x22],
                             (int)(char)param_2[0x534c],*(undefined4 *)(param_2 + 0x26),
                             *(undefined4 *)(param_2 + 0x2a),(uint)*(ushort *)(param_2 + 0x2e),
                             (uint)*(ushort *)(param_2 + 0x30),(uint)*(ushort *)(param_2 + 0x32),
                             (uint)*(ushort *)(param_2 + 0x34),uVar14,uVar13,uVar9,(int)sVar7,
                             (int)sVar6,uVar8,(uint)uVar5,(uint)uVar4,(int)sVar3,(int)sVar2,uVar12,
                             uVar10,(int)(char)SVar1);
      if (iVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
    else {
      uVar12 = 0xffffffff;
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  return uVar12;
}

```

---

## arad_sp_create_character_check

```asm
// === 0818aea2 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check  [0x0818aea2-0x818af99] ===
 818aea2:	55                   	push   %ebp
 818aea3:	89 e5                	mov    %esp,%ebp
 818aea5:	83 ec 38             	sub    $0x38,%esp
 818aea8:	8b 45 0c             	mov    0xc(%ebp),%eax
 818aeab:	8b 00                	mov    (%eax),%eax
 818aead:	89 44 24 08          	mov    %eax,0x8(%esp)
 818aeb1:	c7 44 24 04 2c 1f b9 	movl   $0x8b91f2c,0x4(%esp)
 818aeb8:	08 
 818aeb9:	8b 45 08             	mov    0x8(%ebp),%eax
 818aebc:	89 04 24             	mov    %eax,(%esp)
 818aebf:	e8 b4 97 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818aec4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818aec7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818aecb:	74 3e                	je     818af0b <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0x69>
 818aecd:	c7 44 24 14 6d 1f b9 	movl   $0x8b91f6d,0x14(%esp)
 818aed4:	08 
 818aed5:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818aedc:	08 
 818aedd:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 818aee4:	00 
 818aee5:	c7 44 24 08 20 41 b9 	movl   $0x8b94120,0x8(%esp)
 818aeec:	08 
 818aeed:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818aef4:	08 
 818aef5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818aefc:	e8 09 8d 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818af01:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818af06:	e9 8d 00 00 00       	jmp    818af98 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0xf6>
 818af0b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 818af12:	8d 45 f0             	lea    -0x10(%ebp),%eax
 818af15:	89 44 24 08          	mov    %eax,0x8(%esp)
 818af19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818af20:	00 
 818af21:	8b 45 08             	mov    0x8(%ebp),%eax
 818af24:	89 04 24             	mov    %eax,(%esp)
 818af27:	e8 00 ba f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818af2c:	83 f0 01             	xor    $0x1,%eax
 818af2f:	84 c0                	test   %al,%al
 818af31:	75 08                	jne    818af3b <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0x99>
 818af33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818af36:	83 f8 23             	cmp    $0x23,%eax
 818af39:	7e 07                	jle    818af42 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0xa0>
 818af3b:	b8 01 00 00 00       	mov    $0x1,%eax
 818af40:	eb 05                	jmp    818af47 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0xa5>
 818af42:	b8 00 00 00 00       	mov    $0x0,%eax
 818af47:	84 c0                	test   %al,%al
 818af49:	74 48                	je     818af93 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0xf1>
 818af4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818af4e:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 818af55:	00 00 00 
 818af58:	c7 44 24 14 86 1f b9 	movl   $0x8b91f86,0x14(%esp)
 818af5f:	08 
 818af60:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818af67:	08 
 818af68:	c7 44 24 0c 69 00 00 	movl   $0x69,0xc(%esp)
 818af6f:	00 
 818af70:	c7 44 24 08 20 41 b9 	movl   $0x8b94120,0x8(%esp)
 818af77:	08 
 818af78:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818af7f:	08 
 818af80:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818af87:	e8 7e 8c 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818af8c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818af91:	eb 05                	jmp    818af98 <_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC+0xf6>
 818af93:	b8 00 00 00 00       	mov    $0x0,%eax
 818af98:	c9                   	leave
 818af99:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check @ 0x818aea2

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  int local_10;
  
  local_10 = MySQL::select(param_1,
                           "seLect count(*) from charac_info where m_id=%d and delete_flag=0",
                           *(undefined4 *)param_2);
  if (local_10 == 0) {
    local_14 = 0;
    cVar2 = MySQL::get_int(param_1,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 < 0x24)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_2 + 0x5344) = 2;
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)"
                 ,0x69,"%s","max charac slot limit");
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)"
               ,0x62,"%s","select charac_info error");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## arad_sp_create_dungeon_point

```asm
// === 0818b638 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point  [0x0818b638-0x818b641] ===
 818b638:	55                   	push   %ebp
 818b639:	89 e5                	mov    %esp,%ebp
 818b63b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b640:	5d                   	pop    %ebp
 818b641:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point @ 0x818b638

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  return 0xffffffff;
}

```

---

## arad_sp_create_equip

```asm
// === 0818b443 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip  [0x0818b443-0x818b587] ===
 818b443:	55                   	push   %ebp
 818b444:	89 e5                	mov    %esp,%ebp
 818b446:	57                   	push   %edi
 818b447:	53                   	push   %ebx
 818b448:	81 ec 60 03 00 00    	sub    $0x360,%esp
 818b44e:	8d 95 bd fc ff ff    	lea    -0x343(%ebp),%edx
 818b454:	bb 33 03 00 00       	mov    $0x333,%ebx
 818b459:	b8 00 00 00 00       	mov    $0x0,%eax
 818b45e:	89 d1                	mov    %edx,%ecx
 818b460:	83 e1 01             	and    $0x1,%ecx
 818b463:	85 c9                	test   %ecx,%ecx
 818b465:	74 08                	je     818b46f <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x2c>
 818b467:	88 02                	mov    %al,(%edx)
 818b469:	83 c2 01             	add    $0x1,%edx
 818b46c:	83 eb 01             	sub    $0x1,%ebx
 818b46f:	89 d1                	mov    %edx,%ecx
 818b471:	83 e1 02             	and    $0x2,%ecx
 818b474:	85 c9                	test   %ecx,%ecx
 818b476:	74 09                	je     818b481 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x3e>
 818b478:	66 89 02             	mov    %ax,(%edx)
 818b47b:	83 c2 02             	add    $0x2,%edx
 818b47e:	83 eb 02             	sub    $0x2,%ebx
 818b481:	89 d9                	mov    %ebx,%ecx
 818b483:	c1 e9 02             	shr    $0x2,%ecx
 818b486:	89 d7                	mov    %edx,%edi
 818b488:	f3 ab                	rep stos %eax,%es:(%edi)
 818b48a:	89 fa                	mov    %edi,%edx
 818b48c:	89 d9                	mov    %ebx,%ecx
 818b48e:	83 e1 02             	and    $0x2,%ecx
 818b491:	85 c9                	test   %ecx,%ecx
 818b493:	74 06                	je     818b49b <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x58>
 818b495:	66 89 02             	mov    %ax,(%edx)
 818b498:	83 c2 02             	add    $0x2,%edx
 818b49b:	89 d9                	mov    %ebx,%ecx
 818b49d:	83 e1 01             	and    $0x1,%ecx
 818b4a0:	85 c9                	test   %ecx,%ecx
 818b4a2:	74 05                	je     818b4a9 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x66>
 818b4a4:	88 02                	mov    %al,(%edx)
 818b4a6:	83 c2 01             	add    $0x1,%edx
 818b4a9:	c7 45 f0 33 03 00 00 	movl   $0x333,-0x10(%ebp)
 818b4b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b4b3:	05 01 4e 00 00       	add    $0x4e01,%eax
 818b4b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818b4bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b4be:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 818b4c5:	00 
 818b4c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b4ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 818b4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b4d1:	8d 85 bd fc ff ff    	lea    -0x343(%ebp),%eax
 818b4d7:	89 04 24             	mov    %eax,(%esp)
 818b4da:	e8 40 6b 52 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 818b4df:	83 f0 01             	xor    $0x1,%eax
 818b4e2:	84 c0                	test   %al,%al
 818b4e4:	74 3b                	je     818b521 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0xde>
 818b4e6:	c7 44 24 14 56 22 b9 	movl   $0x8b92256,0x14(%esp)
 818b4ed:	08 
 818b4ee:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818b4f5:	08 
 818b4f6:	c7 44 24 0c 55 01 00 	movl   $0x155,0xc(%esp)
 818b4fd:	00 
 818b4fe:	c7 44 24 08 c0 40 b9 	movl   $0x8b940c0,0x8(%esp)
 818b505:	08 
 818b506:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818b50d:	08 
 818b50e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818b515:	e8 f0 86 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818b51a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b51f:	eb 5d                	jmp    818b57e <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x13b>
 818b521:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b524:	8b 98 48 53 00 00    	mov    0x5348(%eax),%ebx
 818b52a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b52d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b531:	8d 85 bd fc ff ff    	lea    -0x343(%ebp),%eax
 818b537:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b53b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b542:	00 
 818b543:	8b 45 08             	mov    0x8(%ebp),%eax
 818b546:	89 04 24             	mov    %eax,(%esp)
 818b549:	e8 dc 8f 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b54e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 818b552:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b556:	c7 44 24 04 70 22 b9 	movl   $0x8b92270,0x4(%esp)
 818b55d:	08 
 818b55e:	8b 45 08             	mov    0x8(%ebp),%eax
 818b561:	89 04 24             	mov    %eax,(%esp)
 818b564:	e8 af 91 26 00       	call   83f4718 <_ZN5MySQL6updateEPKcz>
 818b569:	85 c0                	test   %eax,%eax
 818b56b:	0f 95 c0             	setne  %al
 818b56e:	84 c0                	test   %al,%al
 818b570:	74 07                	je     818b579 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x136>
 818b572:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b577:	eb 05                	jmp    818b57e <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC+0x13b>
 818b579:	b8 00 00 00 00       	mov    $0x0,%eax
 818b57e:	81 c4 60 03 00 00    	add    $0x360,%esp
 818b584:	5b                   	pop    %ebx
 818b585:	5f                   	pop    %edi
 818b586:	5d                   	pop    %ebp
 818b587:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip @ 0x818b443

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  char local_347;
  char local_346 [818];
  uint local_14;
  SIG_CREATE_CHARAC *local_10;
  
  pcVar6 = &local_347;
  uVar7 = 0x333;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_347 = '\0';
    pcVar6 = local_346;
    uVar7 = 0x332;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  local_14 = 0x333;
  local_10 = param_2 + 0x4e01;
  cVar1 = compress_zip(&local_347,&local_14,(char *)local_10,0x2dc);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(param_2 + 0x5348);
    uVar3 = MySQL::blob_to_str(param_1,0,&local_347,local_14);
    iVar4 = MySQL::update(param_1," upDate inventory set equipslot=\'%s\' where charac_no = %u ",
                          uVar3,uVar2);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*)",
               0x155,"%s","equip compress zip fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_expand_inven

```asm
// === 0818b406 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_expand_inven  [0x0818b406-0x818b442] ===
 818b406:	55                   	push   %ebp
 818b407:	89 e5                	mov    %esp,%ebp
 818b409:	83 ec 18             	sub    $0x18,%esp
 818b40c:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b40f:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b415:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b419:	c7 44 24 04 f8 21 b9 	movl   $0x8b921f8,0x4(%esp)
 818b420:	08 
 818b421:	8b 45 08             	mov    0x8(%ebp),%eax
 818b424:	89 04 24             	mov    %eax,(%esp)
 818b427:	e8 82 92 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b42c:	85 c0                	test   %eax,%eax
 818b42e:	0f 95 c0             	setne  %al
 818b431:	84 c0                	test   %al,%al
 818b433:	74 07                	je     818b43c <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_expand_invenEP5MySQLP17SIG_CREATE_CHARAC+0x36>
 818b435:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b43a:	eb 05                	jmp    818b441 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_expand_invenEP5MySQLP17SIG_CREATE_CHARAC+0x3b>
 818b43c:	b8 00 00 00 00       	mov    $0x0,%eax
 818b441:	c9                   	leave
 818b442:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_expand_inven @ 0x818b406

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_expand_inven(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_expand_inven(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        " inSert into charac_inven_expand  (charac_no,cargo,cargo_capacity, jewel)  values(%u,\'\',0,\'\')"
                        ,*(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_inven

```asm
// === 0818b2b7 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven  [0x0818b2b7-0x818b405] ===
 818b2b7:	55                   	push   %ebp
 818b2b8:	89 e5                	mov    %esp,%ebp
 818b2ba:	56                   	push   %esi
 818b2bb:	53                   	push   %ebx
 818b2bc:	81 ec 80 41 00 00    	sub    $0x4180,%esp
 818b2c2:	8d 85 9e be ff ff    	lea    -0x4162(%ebp),%eax
 818b2c8:	ba 52 41 00 00       	mov    $0x4152,%edx
 818b2cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b2d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b2d8:	00 
 818b2d9:	89 04 24             	mov    %eax,(%esp)
 818b2dc:	e8 df 29 ef ff       	call   807dcc0 <memset@plt>
 818b2e1:	c7 45 f0 52 41 00 00 	movl   $0x4152,-0x10(%ebp)
 818b2e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b2eb:	05 a9 03 00 00       	add    $0x3a9,%eax
 818b2f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818b2f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b2f6:	0f b6 80 3f 53 00 00 	movzbl 0x533f(%eax),%eax
 818b2fd:	84 c0                	test   %al,%al
 818b2ff:	0f 84 bd 00 00 00    	je     818b3c2 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x10b>
 818b305:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b308:	c7 44 24 0c 55 3b 00 	movl   $0x3b55,0xc(%esp)
 818b30f:	00 
 818b310:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b314:	8d 45 f0             	lea    -0x10(%ebp),%eax
 818b317:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b31b:	8d 85 9e be ff ff    	lea    -0x4162(%ebp),%eax
 818b321:	89 04 24             	mov    %eax,(%esp)
 818b324:	e8 f6 6c 52 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 818b329:	84 c0                	test   %al,%al
 818b32b:	74 0a                	je     818b337 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x80>
 818b32d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b332:	e9 c5 00 00 00       	jmp    818b3fc <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x145>
 818b337:	e8 c6 3c 30 00       	call   848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>
 818b33c:	89 c6                	mov    %eax,%esi
 818b33e:	c7 44 24 0c 55 3b 00 	movl   $0x3b55,0xc(%esp)
 818b345:	00 
 818b346:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b349:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b34d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b354:	00 
 818b355:	8b 45 08             	mov    0x8(%ebp),%eax
 818b358:	89 04 24             	mov    %eax,(%esp)
 818b35b:	e8 ca 91 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b360:	89 c3                	mov    %eax,%ebx
 818b362:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b365:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b369:	8d 85 9e be ff ff    	lea    -0x4162(%ebp),%eax
 818b36f:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b373:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b37a:	00 
 818b37b:	8b 45 08             	mov    0x8(%ebp),%eax
 818b37e:	89 04 24             	mov    %eax,(%esp)
 818b381:	e8 a4 91 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b386:	8b 55 0c             	mov    0xc(%ebp),%edx
 818b389:	8b 92 48 53 00 00    	mov    0x5348(%edx),%edx
 818b38f:	89 74 24 14          	mov    %esi,0x14(%esp)
 818b393:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 818b397:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b39b:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b39f:	c7 44 24 04 6c 21 b9 	movl   $0x8b9216c,0x4(%esp)
 818b3a6:	08 
 818b3a7:	8b 45 08             	mov    0x8(%ebp),%eax
 818b3aa:	89 04 24             	mov    %eax,(%esp)
 818b3ad:	e8 fc 92 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b3b2:	85 c0                	test   %eax,%eax
 818b3b4:	0f 95 c0             	setne  %al
 818b3b7:	84 c0                	test   %al,%al
 818b3b9:	74 3c                	je     818b3f7 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x140>
 818b3bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b3c0:	eb 3a                	jmp    818b3fc <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x145>
 818b3c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b3c5:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b3cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b3cf:	c7 44 24 04 b4 21 b9 	movl   $0x8b921b4,0x4(%esp)
 818b3d6:	08 
 818b3d7:	8b 45 08             	mov    0x8(%ebp),%eax
 818b3da:	89 04 24             	mov    %eax,(%esp)
 818b3dd:	e8 cc 92 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b3e2:	e8 1b 3c 30 00       	call   848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>
 818b3e7:	85 c0                	test   %eax,%eax
 818b3e9:	0f 95 c0             	setne  %al
 818b3ec:	84 c0                	test   %al,%al
 818b3ee:	74 07                	je     818b3f7 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x140>
 818b3f0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b3f5:	eb 05                	jmp    818b3fc <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC+0x145>
 818b3f7:	b8 00 00 00 00       	mov    $0x0,%eax
 818b3fc:	81 c4 80 41 00 00    	add    $0x4180,%esp
 818b402:	5b                   	pop    %ebx
 818b403:	5e                   	pop    %esi
 818b404:	5d                   	pop    %ebp
 818b405:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven @ 0x818b2b7

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char local_4166 [16722];
  uint local_14;
  SIG_CREATE_CHARAC *local_10;
  
  memset(local_4166,0,0x4152);
  local_14 = 0x4152;
  local_10 = param_2 + 0x3a9;
  if (param_2[0x533f] == (SIG_CREATE_CHARAC)0x0) {
    MySQL::insert(param_1,"inSert into inventory  (charac_no, coin, money)  values(%u, %d) ",
                  *(undefined4 *)(param_2 + 0x5348));
    iVar5 = WongWork::CEventMgr::GetCoinCharacCreate();
    if (iVar5 != 0) {
      return 0xffffffff;
    }
  }
  else {
    cVar1 = compress_zip(local_4166,&local_14,(char *)local_10,0x3b55);
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    uVar2 = WongWork::CEventMgr::GetCoinCharacCreate();
    uVar3 = MySQL::blob_to_str(param_1,0,local_10,0x3b55);
    uVar4 = MySQL::blob_to_str(param_1,0,local_4166,local_14);
    iVar5 = MySQL::insert(param_1,
                          "inSert into inventory (charac_no, inventory,coin) values(%u, \'%s\',%d)",
                          *(undefined4 *)(param_2 + 0x5348),uVar4,uVar3,uVar2);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

```

---

## arad_sp_create_npc_relationship

```asm
// === 0818b6c9 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship  [0x0818b6c9-0x818b705] ===
 818b6c9:	55                   	push   %ebp
 818b6ca:	89 e5                	mov    %esp,%ebp
 818b6cc:	83 ec 18             	sub    $0x18,%esp
 818b6cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b6d2:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b6d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b6dc:	c7 44 24 04 fc 24 b9 	movl   $0x8b924fc,0x4(%esp)
 818b6e3:	08 
 818b6e4:	8b 45 08             	mov    0x8(%ebp),%eax
 818b6e7:	89 04 24             	mov    %eax,(%esp)
 818b6ea:	e8 bf 8f 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b6ef:	85 c0                	test   %eax,%eax
 818b6f1:	0f 95 c0             	setne  %al
 818b6f4:	84 c0                	test   %al,%al
 818b6f6:	74 07                	je     818b6ff <_ZN4ARAD8DATABASE12CREATE_QUERY31arad_sp_create_npc_relationshipEP5MySQLP17SIG_CREATE_CHARAC+0x36>
 818b6f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b6fd:	eb 05                	jmp    818b704 <_ZN4ARAD8DATABASE12CREATE_QUERY31arad_sp_create_npc_relationshipEP5MySQLP17SIG_CREATE_CHARAC+0x3b>
 818b6ff:	b8 00 00 00 00       	mov    $0x0,%eax
 818b704:	c9                   	leave
 818b705:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship @ 0x818b6c9

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,\'\')",
                        *(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_pvp

```asm
// === 0818b5f4 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp  [0x0818b5f4-0x818b637] ===
 818b5f4:	55                   	push   %ebp
 818b5f5:	89 e5                	mov    %esp,%ebp
 818b5f7:	83 ec 28             	sub    $0x28,%esp
 818b5fa:	c7 45 f4 98 01 00 00 	movl   $0x198,-0xc(%ebp)
 818b601:	8b 45 0c             	mov    0xc(%ebp),%eax
 818b604:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818b60a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b60e:	c7 44 24 04 e8 22 b9 	movl   $0x8b922e8,0x4(%esp)
 818b615:	08 
 818b616:	8b 45 08             	mov    0x8(%ebp),%eax
 818b619:	89 04 24             	mov    %eax,(%esp)
 818b61c:	e8 8d 90 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b621:	85 c0                	test   %eax,%eax
 818b623:	0f 95 c0             	setne  %al
 818b626:	84 c0                	test   %al,%al
 818b628:	74 07                	je     818b631 <_ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC+0x3d>
 818b62a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b62f:	eb 05                	jmp    818b636 <_ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC+0x42>
 818b631:	b8 00 00 00 00       	mov    $0x0,%eax
 818b636:	c9                   	leave
 818b637:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp @ 0x818b5f4

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,"inSert into pvp_result (charac_no) values(%u)",
                        *(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## arad_sp_create_skill

```asm
// === 0818b588 ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill  [0x0818b588-0x818b5f3] ===
 818b588:	55                   	push   %ebp
 818b589:	89 e5                	mov    %esp,%ebp
 818b58b:	83 ec 28             	sub    $0x28,%esp
 818b58e:	c7 45 f4 98 01 00 00 	movl   $0x198,-0xc(%ebp)
 818b595:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b598:	8b 55 0c             	mov    0xc(%ebp),%edx
 818b59b:	83 c2 79             	add    $0x79,%edx
 818b59e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b5a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b5a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818b5ad:	00 
 818b5ae:	8b 45 08             	mov    0x8(%ebp),%eax
 818b5b1:	89 04 24             	mov    %eax,(%esp)
 818b5b4:	e8 71 8f 26 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 818b5b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 818b5bc:	8b 92 48 53 00 00    	mov    0x5348(%edx),%edx
 818b5c2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818b5c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b5ca:	c7 44 24 04 ac 22 b9 	movl   $0x8b922ac,0x4(%esp)
 818b5d1:	08 
 818b5d2:	8b 45 08             	mov    0x8(%ebp),%eax
 818b5d5:	89 04 24             	mov    %eax,(%esp)
 818b5d8:	e8 d1 90 26 00       	call   83f46ae <_ZN5MySQL6insertEPKcz>
 818b5dd:	85 c0                	test   %eax,%eax
 818b5df:	0f 95 c0             	setne  %al
 818b5e2:	84 c0                	test   %al,%al
 818b5e4:	74 07                	je     818b5ed <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC+0x65>
 818b5e6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b5eb:	eb 05                	jmp    818b5f2 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC+0x6a>
 818b5ed:	b8 00 00 00 00       	mov    $0x0,%eax
 818b5f2:	c9                   	leave
 818b5f3:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill @ 0x818b588

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = MySQL::blob_to_str(param_1,0,param_2 + 0x79,0x198);
  iVar2 = MySQL::insert(param_1,"inSert into skill (charac_no, skill_slot) values(%u, \'%s\')",
                        *(undefined4 *)(param_2 + 0x5348),uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## arad_sp_get_characer_index

```asm
// === 0818ad8b ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index  [0x0818ad8b-0x818aea1] ===
 818ad8b:	55                   	push   %ebp
 818ad8c:	89 e5                	mov    %esp,%ebp
 818ad8e:	83 ec 38             	sub    $0x38,%esp
 818ad91:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818ad98:	c7 44 24 04 f0 1e b9 	movl   $0x8b91ef0,0x4(%esp)
 818ad9f:	08 
 818ada0:	8b 45 08             	mov    0x8(%ebp),%eax
 818ada3:	89 04 24             	mov    %eax,(%esp)
 818ada6:	e8 cd 98 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818adab:	85 c0                	test   %eax,%eax
 818adad:	0f 95 c0             	setne  %al
 818adb0:	84 c0                	test   %al,%al
 818adb2:	74 3e                	je     818adf2 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0x67>
 818adb4:	c7 44 24 14 02 1f b9 	movl   $0x8b91f02,0x14(%esp)
 818adbb:	08 
 818adbc:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818adc3:	08 
 818adc4:	c7 44 24 0c 47 00 00 	movl   $0x47,0xc(%esp)
 818adcb:	00 
 818adcc:	c7 44 24 08 80 41 b9 	movl   $0x8b94180,0x8(%esp)
 818add3:	08 
 818add4:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818addb:	08 
 818addc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ade3:	e8 22 8e 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ade8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818aded:	e9 ae 00 00 00       	jmp    818aea0 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0x115>
 818adf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818adf5:	05 48 53 00 00       	add    $0x5348,%eax
 818adfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 818adfe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818ae05:	00 
 818ae06:	8b 45 08             	mov    0x8(%ebp),%eax
 818ae09:	89 04 24             	mov    %eax,(%esp)
 818ae0c:	e8 e1 74 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818ae11:	83 f0 01             	xor    $0x1,%eax
 818ae14:	84 c0                	test   %al,%al
 818ae16:	74 3b                	je     818ae53 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0xc8>
 818ae18:	c7 44 24 14 d0 1e b9 	movl   $0x8b91ed0,0x14(%esp)
 818ae1f:	08 
 818ae20:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818ae27:	08 
 818ae28:	c7 44 24 0c 4c 00 00 	movl   $0x4c,0xc(%esp)
 818ae2f:	00 
 818ae30:	c7 44 24 08 80 41 b9 	movl   $0x8b94180,0x8(%esp)
 818ae37:	08 
 818ae38:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818ae3f:	08 
 818ae40:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ae47:	e8 be 8d 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ae4c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ae51:	eb 4d                	jmp    818aea0 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0x115>
 818ae53:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ae56:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 818ae5c:	85 c0                	test   %eax,%eax
 818ae5e:	75 3b                	jne    818ae9b <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0x110>
 818ae60:	c7 44 24 14 1a 1f b9 	movl   $0x8b91f1a,0x14(%esp)
 818ae67:	08 
 818ae68:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818ae6f:	08 
 818ae70:	c7 44 24 0c 51 00 00 	movl   $0x51,0xc(%esp)
 818ae77:	00 
 818ae78:	c7 44 24 08 80 41 b9 	movl   $0x8b94180,0x8(%esp)
 818ae7f:	08 
 818ae80:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818ae87:	08 
 818ae88:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ae8f:	e8 76 8d 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ae94:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ae99:	eb 05                	jmp    818aea0 <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC+0x115>
 818ae9b:	b8 00 00 00 00       	mov    $0x0,%eax
 818aea0:	c9                   	leave
 818aea1:	c3                   	ret

```

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index @ 0x818ad8b

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = MySQL::select(param_1,"seLect @@identity");
  if (iVar2 == 0) {
    cVar1 = MySQL::get_uint(param_1,0,(uint *)(param_2 + 0x5348));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x5348) == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
                   ,0x51,"%s","charac_no error");
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
                 ,0x4c,"%s","Parsing Error of Selected Field");
      uVar3 = 0xffffffff;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
               ,0x47,"%s","select @@identity error");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

