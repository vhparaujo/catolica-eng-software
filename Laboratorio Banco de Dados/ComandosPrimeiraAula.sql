create database aula;
use aula;

create table aluno(
	matricula int(8) not null auto_increment,
    nome varchar(50) null,
    idade int(3) null,
    primary key (matricula)
);

insert into aluno values (0,'Maria',20);
insert into aluno values (0,'Victor',19);
insert into aluno values (0,'Marta',36);
select * from aluno;
select nome from aluno where nome like 'm%';
select count(matricula) from aluno;
select max(idade) from aluno;

update aluno set idade = 18 where matricula = 1;

drop database aula;